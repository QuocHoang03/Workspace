var cauvang=document.querySelector('.bantay'),
    menu=document.querySelector('.menu')
console.log(cauvang.offsetTop);

window.addEventListener('scroll',function(){
    if(window.pageYOffset>=150){
        menu.classList.add('doimenu');
    }
    else{
        menu.classList.remove('doimenu');
    }
    if(window.pageYOffset>=cauvang.offsetTop){
        cauvang.classList.add('hieuung-animate');
    }
    else{
        cauvang.classList.remove('hieuung-animate');
    }
})
