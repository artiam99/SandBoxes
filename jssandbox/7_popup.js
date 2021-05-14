const button = document.querySelector('button');
const popup = document.querySelector('.popup_wrapper');
const close = document.querySelector('.close');

button.addEventListener('click' , () =>
{
    popup.style.display = 'block';
});

close.addEventListener('click' , () =>
{
    popup.style.display = 'none';
});

popup.addEventListener('click' , e =>
{
    popup.style.display = 'none';
});