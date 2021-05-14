const now = new Date(); // current date

console.log(now);  // Tue Apr 27 2021 18:51:51 GMT+0530 (India Standard Time)

console.log(now.getFullYear());  // 2021
console.log(now.getMonth());     // 4
console.log(now.getDate());      // 27
console.log(now.getDay());       // 2
console.log(now.getHours());     // 18
console.log(now.getMinutes());   // 51
console.log(now.getSeconds());   // 51

console.log('Time-stamp:' , now.getTime());  // Number of miliseconds till 1970s ... new Date(timestamp) ... will give date format

console.log(now.toDateString());
console.log(now.toTimeString());
console.log(now.toLocaleString());


const clock = document.querySelector('.clock');

const tick = () =>
{
    const now = new Date();

    const h = now.getHours();
    const m = now.getMinutes();
    const s = now.getSeconds();

    clock.innerHTML = `<h1>${h} : ${m} : ${s}</h1>`;
};

setInterval(tick , 1000);