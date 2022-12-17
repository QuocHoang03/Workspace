<<<<<<< HEAD
var clock = document.querySelector('.clock')
var ngay = document.querySelector('.ngay')
var thang = document.querySelector('.thang')
var nam = document.querySelector('.nam')
var tuan = document.querySelector('.tuan')
var n = new Date(2022,4,6)
setInterval(()=>{
    const date = new Date();

    nam.innerHTML = `Year = ${date.getFullYear() - n.getFullYear()}`
    thang.innerHTML = `Month = ${date.getMonth()+1 - n.getMonth()}`
    ngay.innerHTML = `Date = ${date.getDate() -n.getDate()}`
},1000);
=======
document.addEventListener("DOMContentLoaded",function(){
    var nut = document.querySelectorAll('div.nut ul li');
    var slides = document.querySelectorAll('div.slide div');
    for(var i = 0 ; i < nut.length; i++){
    nut[i].addEventListener('click',function(){
        var nutnay = this;
        var vitrislide = 0;
        console.log(nutnay.previousElementSibling);
        for(var i = 0;nutnay = nutnay.previousElementSibling; vitrislide++){
            //chay den khi nutnay = nutnay thi dung.
            // chay xong lenh nay khi click vao nut ta lay dc vitrislide
        }
        for(var i = 0; i < slides.length; i++){
            slides[i].classList.remove('ra');
        }
        for(var i = 0; i < slides.length; i++){
            slides[vitrislide].classList.add('ra');
        }
    })
    }
    },false)
>>>>>>> 2f3ccc2aa930270d29d44915eb34ca8b2630dcd4
