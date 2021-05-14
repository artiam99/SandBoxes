let user = 
{
    name: 'John', // Key-Value Pairs
    age: 42,
    email: 'mayer.john@gmail.com',
    hobbies: ['Guitar' , 'Singing' , 'Song-writing'],
    online: [{name: 'youtube' , likes: '1M'} , {name: 'tiktok' , likes: '2M'}],
    location: 'La',
    login: function() // Methods
    {
        console.log('user logged in.');
    },
    loghobbies: function() // arrow methods won't recognise this for object reference ... it will be windows object
    {
        this.hobbies.forEach(hobbie => { console.log(hobbie); });  // Callback arrow
    }
};

console.log(user);

console.log(user.age);

user['age'] = 43;

console.log(typeof user);

user.login();

console.log(this); // Default object .. Windwo object

user.loghobbies();

// Math Object

console.log(Math);
console.log(Math.PI);

const area = 7.7;

console.log(Math.round(area));  // closer integer

console.log(Math.floor(Math.random() * 100)); // Random Number Generator ... 0 <= Math.random() <= 1

// Primitive and Reference

const age = 45; // Primitive ... Created in stack

const ob = {name: 'John' , age: 43}; // Created in heap ... accessed by ob pointer

const ob2 = ob;

ob.age = 44;

console.log(ob2.age); // it will be changed too ... as ob and ob2 are just pointers