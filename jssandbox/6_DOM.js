// DOM ... Document Object Model is a hierarchical structure of HTML elemets
//
//                                       html
//                                    /       \
//                                 head      body
//                                / | | \   / | | \
//                            title ......  div , p , ......

let error = document.querySelector('div.error'); // <div class="error">

console.log(error);

const para = document.querySelectorAll('p'); // Nodelist of <p> ... but not an array

console.log(para[0]);

 para.forEach(element => {
     console.log(element);   
 });

error = document.querySelectorAll('.error');

console.log(error);




const title = document.getElementById('title');

console.log(title);

const error_class = document.getElementsByClassName('error');

console.log(error_class); // HTML collection , Not a Nodelist ... error_class[0] will work but ... forEach won't

const paras = document.getElementsByTagName('p'); // HTML Collection of all <p> tags




// changing content

const p = document.querySelector('p'); // first p

p.innerText = 'John Mayer'; // Text inside html element

const h = document.querySelector('div.error');

h.innerHTML = '<p>Hello Boy</p>'; // HTML inside html element

const arr = ['luke' , 'leia' , 'han'];

const content = h;

arr.forEach(element =>
{
    content.innerHTML += `<p>${element}</p>`;
});




 // Change Attribute

const link = document.querySelector('a');

console.log(link.getAttribute('href'));

link.setAttribute('href' , 'http://www.youtube.com');

link.innerText = 'Youtube'

console.log(link.getAttribute('href'));




// Changing CSS styling

//const title = document.getElementById('title');

title.style.color = 'crimson';

title.style.margin = '20px';

title.style.margin = ''; // Deleting style




// Adding and removing classes

//const para = document.querySelectorAll('p');

para[0].classList.add('success');

para[2].classList.remove('another');

para[1].classList.toggle('success'); // if class is present then remove .. else add

para.forEach(element => {
    console.log(element.classList);   // all classes ... class="a b c" ...multiple classes together too
});

console.log(para[2].textContent);  // innerText doesn't shows hiddend words , textContent does




//  Parent - Child Relation b/w nodes in HTML tree

const article = document.querySelector('article');

console.log(article.children);  // HTML element ... remember forEach not applicable

Array.from(article.children).forEach(element =>   // Convert HTML to Array
{ 
    element.classList.add('article_element');
 });

console.log(article.parentElement); // Parent of article tag

console.log(p.nextElementSibling); // next sibling tag .. null if no next sibling

console.log(p.nextElementSibling.previousElementSibling.parentElement); // chaining




// Event Basics

const ul = document.querySelector('ul');

const button = document.querySelector('button');

let i = 1;

button.addEventListener('click' , () =>
{
    console.log('Button Clicked');

    ul.innerHTML += `<li> New ${i++}</li>`;  // Or .. const li = document.createElement('li'); 
});                                         //  li.textContent = `New ${i++}`;  ul.append(li);  or ... ul.prepend(li);


const li = document.querySelectorAll('li');

// li.forEach(element =>  // for each li , an eventlinstener is attached to it ... So Now Attached ... So Click and make the event occur
// {
//     element.addEventListener('click' , e =>
//     {
//         console.log(element.innerText);
//         //console.log(e.target.innerText); // e target is the element where clicked is happened

//         //e.target.style.textDecoration = 'line-through';

//         e.target.remove();
//     });
// });



//  Event Bubbling if eventlistener is called for some element and if some eventlisteners are attached to that element's ancestors
//  then ancestors' eventlisteners will be called too  ... in child to parent order

ul.addEventListener('click' , e => // when clicked inside ul ... event bubbling is happening and event delegation is happending
{                                 //  So now , if any new li is added ul event listener will perform it ... we don't have to 
    if(e.target.tagName === 'LI')//   add event listeners separately
    {
        console.log(e.target.innerText);  

        e.target.remove();
    }
});



const copy = document.querySelectorAll('.copyright');

copy.forEach(element =>
{
    element.addEventListener('copy' , e =>
    {
        console.log(e.target.textContent , 'is copied');
    });
});


const box = document.querySelectorAll('.box');

box.forEach(element =>
{
    element.addEventListener('mousemove' , e =>
    {
        element.innerText = `(X - ${e.offsetX} , Y - ${e.offsetY})`;
    });
});

document.addEventListener('wheel' , e =>  // Not Working though
{
    console.log(e.pageX , e.pageY);
});