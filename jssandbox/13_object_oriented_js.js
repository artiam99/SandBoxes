const str = new String('Hello'); // Creating String Object

class User
{
    constructor(username)
    {
        this.username = username;
    }
    login()
    {
        console.log(`${this.username} Logged in.`);

        return this;
    }
    logout()
    {
        console.log(`${this.username} Logged out.`);
    }
}

class Admin extends User // Inheritance .. Admin extends User class
{
    constructor(username , title) // Child class constructor is called if exists .. else parent constructor
    {
        super(username); // attach properties to parent constructor
        this.title = title;
    }
    deleteUser(user)
    {
        users = users.filter(u => u.username !==  user.username); // return true or false ....... users array is decleared later
    }
}

const userOne = new User('mario');
const userTwo = new User('Ron');
const userThree = new Admin('David' , 'God'); // User class constructor will be called

console.log(userOne.username);

userOne.login().logout();

let users = [userOne , userTwo , userThree];

console.log(users);

userThree.deleteUser(userTwo);

console.log(users);


// // Code Underneath the Class

// function User(username , age)  arrow won't work
// {
//     this.username = username;
//     this.age = age;
//     this.login = function()
//     {
//         console.log(`${this.username} logged in.`);
//     };
// }


// Prototypes - Every Object in Javascript has Prototype. Prototype contains all object methods for that object type
// User object defined objects also have prototypes. that contains only constructor and we need to add other methods manually
// When we use classes javascript automatically add methods to proto. In other cases we do manually



function User1(username , age)
{
    this.username = username;
    this.age = age;
}

User1.prototype.login = function()
{
    console.log(`${this.username} logged in.`);
};

const userfour = new User1('Ravi' , 34);

console.log(userfour);

userfour.login();



// Prototypal Inheritance

function User2(username)
{
    this.username = username;
}

User2.prototype.login = function()
{
    console.log(`${this.username} logged in.`);
};

User2.prototype.login = function()
{
    console.log(`${this.username} Logged out.`);
};

function Admin2(username , title)
{
    User2.call(this , username); // just like super
    
    this.title = title;
}

Admin2.prototype = Object.create(User2.prototype);

Admin2.prototype.deleteUser = function()
{
    // Delete user;
};

const userOne = new User('mario');
const userTwo = new User('Ron');
const userThree = new Admin('David' , 'God'); // User class constructor will be called
