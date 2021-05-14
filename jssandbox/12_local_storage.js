// If we Refresh Page data will be deleted ... Local Storage API is stood on the window object in the browser , used to store these Data

// Store data in Local Storage

localStorage.setItem('name' , 'mario');// Key - Value Pair
localStorage.setItem('age' , 50); // 50 will turn into string automatically

// Get Daata from Local Storage

let name = localStorage.getItem('name');

console.log(name);

// Update data in Local Storage

localStorage.age = '40';  // Should be String this time

// After refresh Local Storage will keep the key value as set at last time

localStorage.removeItem('name');

console.log(localStorage.getItem('name')); // null



// Stringifying and Parsing Data

const todos = [{text: 'Guitar' , name: 'John'},
               {text: 'Bass' , name: 'Davie'},
               {text: 'Drums' , name: 'Phill'}
              ];

console.log(JSON.stringify(todos));

localStorage.setItem('todos' , JSON.stringify(todos)); // todos - key

console.log(JSON.parse(localStorage.getItem('todos')));


