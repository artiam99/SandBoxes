// Submit Event

const form = document.querySelector('.sign-up');
//const username = document.querySelector('#username');

// form.addEventListener('submit' , e =>
// {
//     e.preventDefault(); // refresh page

//     //console.log(username.value);

//     console.log(form.username.value); // form => id = "username" . value
// });




// Regular Expressions - Type out pattern for forms  .... https://regex101.com/

// starts and ends with '/' ... /ninja/ matches with xyzninjaabc ... /[a-zA-Z0-9]{6,10}/ ... 6 to 10 char long with alphabets and numbers

// /.{6,10}/ ... 6 to 10 char long with any char .... /^adfaf$/ ... ^ start .. $ end

// const username = 'artiam';

// const pattern = /[a-z]{6,}/;  //  %artiam%%$& true ... artiam mathches .... /^[a-z]{6,}$/  doesn't match

// console.log(pattern.test(username));

// console.log(username.search(pattern));  // first index of match ... 123434artiam4334 .. /[a-z]{6,}/ ..... 6


// Check if expression is valid or not

const feedback = document.querySelector('.feedback');

// form.addEventListener('submit' , e =>
// {
//     e.preventDefault();

//     const text1 = form.username.value;

//     const pattern = /^[a-zA-Z]{6,10}$/;

//     if(pattern.test(text1))
//     feedback.textContent = 'Valid Username';

//     else
//     feedback.textContent = 'Unvalid Username';

// });

// Keyboard Events ... live checking if valid expression


form.username.addEventListener('keyup' , e =>
{
    e.preventDefault();

    const text1 = e.target.value;
    
    const pattern = /^[a-zA-Z]{6,10}$/;

    if(pattern.test(text1))
    feedback.textContent = 'Valid Username' , feedback.style = 'color : lime';

    else
    feedback.textContent = 'Unvalid Username' , feedback.style = 'color : crimson';
});