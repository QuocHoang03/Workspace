var nut =document.querySelectorAll('.nutchuyen ul li');
var slides=document.querySelectorAll('.ndslide ul li');
for (let i = 0; i < nut.length; i++) {
     nut[i].onclick=function(){
        for (let k = 0; k < nut.length; k++) {
             nut[k].classList.remove('active');
            
        }
        this.classList.add('active');
        // xác định vị trí cần click
        // console.log(this.previousElementSibling);
        var nutactive=this;
     var vt=0;
     for (vt = 0; nutactive=nutactive.previousElementSibling; vt++) { }
    //  console.log(vt);//vị trí nút cần click
    for (var i = 0; i < slides.length; i++) {
        slides[i].classList.remove('active');
           slides[vt].classList.add('active');         
     }

     };
    
}