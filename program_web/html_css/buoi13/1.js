document.write('chào bạn ');
 n=1;m='1';
if(n===m) //so sánh đồng nhất 
    document.write('bằng nhau ');
else 
    document.write('không bằng ');

//toán tử 3 ngôi
// if(a>b)
//     c=a;
// else
//     c=b;
// c=(a>b)?a:b;
// alert('ok');
console.log('ok');
var n;
// n=4;
n="abc";
var a=3;
console.log(a+"abc");
console.log(a+10);
//khi điều kiện trong 1 khoảng nào dó thì dùng if
//swip dùng để liệt kê 
//vong  lặp for dùng  khi biết trước đc số phong lặp whlie là vòng lặp thông dụng nhất
// câu lệnh while tối thiểu 0 lần xét điêu điện trước 
// câu lệnh làm rồi mơi xét điều kiên


// kiểu mảng trong JS
// khai báo
var M=['môt','hai','ba'];
//xác định chiều dài mảng 
console.log('chiều dài mảng: ' +M.length);

//truy xuất phần tử
console.log(M[1]);

//thêm phần tử vào cuối mảng 
M.push('bốn');
console.log(M);

//thêm phần tử vào đầu mảng
M.unshift('không');
console.log(M);

//xóa phần tử cuối mảng
M.pop();
console.log(M);

//xóa phần tử đầu mảng
M.shift();
console.log(M);

// tìm vị trí của phần tử trong mang có thì hiện ra còn ko có thì hiện ra -1
vt=M.indexOf('ba');
console.log(vt);
//trong JS phân biệt chữ hoa chữ thường

//xóa phần tử bằng chỉ mục 
M.splice(vt);
console.log(M);

//các hàm xử lý chuỗi 
var x='điện thoai iphone';
console.log(x.length);

//tìm chuỗi con trong chuỗi cho trước 
vitri=x.indexOf('iphone');
if(vitri==-1)
    console.log('không có');
else 
    console.log('tìm thấy');

//thay thế chuỗi 
var x1=x.replace('iphone','samsung');
console.log(x1);

//chuyển chuỗi thành mảng 
var y='iphone,samsung,oppo,nokia'
var mangy=y.split(',')
console.log(y.length);
console.log(mangy.length);

//các hàm xử lý số
var a=7,b=8;
console.log(a+b);
b=b.toString();//đổi số thành kí tự
console.log(a+b);

c='9';
console.log(a+c);
c=Number(c);// đổi kí tự số ---> số
console.log(a+c);

//hàm trong JS
//xây dụng hàm bình thường
function tb(){
    alert(' nội dung');
}

// hàm anonymous (vô danh)
var tb1=function(){
    console.log(abc);
}
tb1;

//hàm arrow funtion cách viết gộp của anonymous 
var tb2=()=>{
    console.log(abc);
}
var abc=()=>{
    console.log();
}
