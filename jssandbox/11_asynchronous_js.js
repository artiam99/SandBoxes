// Javascript can run one statement at a time from top to bottom

console.log(1);
console.log(2);

setTimeout(() => // Waits 2 secs and fires callback function
{
    console.log('Callback');
}, 2000);

console.log(3);
console.log(4);

// HTTP request are requests to get data from another servers
// These requests are made to API points
// We get data from API in JSON form

const request = new XMLHttpRequest(); // request object

request.addEventListener('readystatechange' , () =>
{
    //console.log(request , request.readyState);
    if(request.readyState === 4 && request.status === 200)
    console.log(request.responseText);  // Long json data is printed in the console

    else if(request.readyState === 4)
    {
        console.log('Problem in code or server or redirection');
    }
});

request.open('GET' , 'https://jsonplaceholder.typicode.com/todos/');

request.send();

// Ready States -
//
// 0 - Unset (open() not called yet)
// 1 - Open  (open() has been called)
// 2 - Headers Received  (send() has been called)
// 3 - Loading (Downloading respose text holds partial data)
// 4 - Done  (operation complete)

// Response Status
//
// Information Responses - 100 range
// Successful Responses - 200 range
// Redirection Messages(More than one responses) - 300 range
// client Error Responses(Error in Code) - 400 range
// Server Error(Error in Server) - 500 ranges

const getTodos = (callback) =>
{
    const request = new XMLHttpRequest(); // request object

    request.addEventListener('readystatechange' , () =>
    {
        //console.log(request , request.readyState);
        if(request.readyState === 4 && request.status === 200)
        callback(false , request.responseText);  // Long json data is printed in the console

        else if(request.readyState === 4)
        callback(true , null);
        
    });

    request.open('GET' , 'https://jsonplaceholder.typicode.com/todos/');

    request.send();
};


console.log(1);
console.log(2);

getTodos((err , data) =>
{
    if(err)
    console.log('Problem in code or server or redirection');

    else
    console.log(data);
});

console.log(3);
console.log(4);


// json is string that looks like javascript object
// most of the API sends back data in the form of json

const getTodos2 = callback =>
{
    const request = new XMLHttpRequest(); // request object

    request.addEventListener('readystatechange' , () =>
    {
        const data = JSON.parse(request.responseText);  //  json data to js object

        if(request.readyState === 4 && request.status === 200)
        callback(false , data);

        else if(request.readyState === 4)
        callback(true , null);
        
    });

    request.open('GET' , '11_asynchronous_js.json');

    request.send();
};

getTodos2((err , data) =>
{
    if(err)
    console.log('Problem in code or server or redirection');

    else
    console.log(data);
});



//  Callback Hell -> HTTP requests are sent but we don't know when the data is coming. So we need nesting calbacks ... this is callback hell.


// getTodos('jsonsource_1' , (data) =>   .... getTodos taking json source as parameter for different websites. printing 1, 2, 3 in order
// {
//     console.log(data);
    
//     getTodos('jsonsource_2' , (data) =>
//     {
//         console.log(data);
        
//         getTodos('jsonsource_3' , (data) =>
//         {
//             console.log(data);
//         });
//     });
// });


// Promises


// const getSomthing = () =>
// {
//     return new Promise((resolve , reject) =>
//     {
//         resolve('some data');
//         reject('some error');
//     });
// };

// getSomthing().then(data =>
// {
//     console.log(data);
// } , err =>
// {
//     console.log(err);
// });


const getTodos3 = (resource) =>
{
    return new Promise((resolve , reject) =>
    {
        const request = new XMLHttpRequest();

        request.addEventListener('readystatechange' , () =>
        {
            if(request.readyState === 4 && request.status === 200)
            resolve(JSON.parse(request.responseText));

            else if(request.readyState === 4)
            reject('Error found');
        });

        request.open('GET' , resource);

        request.send();
    });
};

getTodos3('11_asynchronous_js.json').then(data =>
{
    console.log(data);
}).catch(err =>
{
    console.log(err);
});


// Chaining Promises

getTodos3('11_asynchronous_js.json').then(data =>
{
    console.log(data);
    return getTodos3('11_asynchronous_js1.json');
}).then(data =>
{
    console.log(data);
}).catch(err =>  // if error found catch will be called next calls won't be done
{
    console.log(err);
});



// Fetch API

fetch('1_asynchronous_js.json').then(data =>
{
    return data.json(); // return promise

}).then(data =>
{
    console.log(data);

}).catch(err =>  //  500 range error only
{
    console.log(data);
});


// Async & Await

const getTodos4 = async () =>  // Asynchronous Function ... Returns promise always
{
    const response = await fetch('11_asynchronous_js.json');  // Storing in variable is not blocking code as it's in Asynchronous Function

    if(response.status !== 200)
    throw new Error('Error Found');  // Throw Error

    const data = await response.json(); // Await awaits the code inside asynchronous function

    return data;
};

getTodos4().then(data => console.log(data)).catch(err => console.log(err));



