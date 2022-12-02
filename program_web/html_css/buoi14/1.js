//bắt đối tượng : thẻ
var td=document.getElementsByTagName('h1')
console.log(td.length);
console.log(td [1] );
console.log(td[1].innerHTML);
td[1].innerHTML='html'

var tieude=document.getElementsByTagName('h4')


for (let i = 0; i < tieude.length; i++) {
    tieude[i].innerHTML='<div class="btn btn-info">click</div>';
}

//bắt đối tượng id
var td3=document.getElementById('td3');
console.log(td3);


//bắt đối tượng class
var khoi=document.getElementsByClassName('card');
console.log(khoi);

// bắt đối tượng đầu tiên trong nhóm đối tượng
var td1=document.querySelector('.card');
console.log(td1);

//bắt nhóm đối tượng 
var m=document.querySelectorAll('.card');
console.log(m);

// hàm xử lý giao diện 
var nut=document.getElementsByClassName('nut');
nut[1].classList.remove('btn-primary');
nut[1].classList.add('btn-warning');

nut[2].classList.toggle('kichthuoc');
//nut[2].classList.toggle('kichthuoc');

//hàm xử lý sự kiện: click
nut[0].onclick=function(){
    this.classList.toggle('doimau');
}

var clickNut=document.querySelector('.nut4'),
     box=document.querySelector('.box');

clickNut.onclick=function(){
    box.classList.toggle('dichuyen');
}


var dn=document.querySelector('.dangnhap'),
    formdn=document.querySelector('.formdn')
dn.onclick=function(){
    formdn.classList.add('hienform');

}
var nutdn=document.querySelector('.nutdn')
nutdn.onclick=function(){
    formdn.classList.remove('hienform');
}

