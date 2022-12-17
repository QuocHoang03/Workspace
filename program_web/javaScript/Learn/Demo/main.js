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