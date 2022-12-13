var courseApi = 'http://localhost:3000/courses';

function start() {
    getCourses(function (courses) {
        renderCourses(courses);
    });

    headlerCreateForm();
}
start();

// ------------------------
function getCourses(callback) {
    fetch(courseApi)
        .then(function (response) {
            return response.json();
        })
        .then(callback)
}

// ------------------------
function renderCourses(courses) {
    var listCourseBlock = document.querySelector('#list-courses');
    var htmls = courses.map(function (course) {
        return `
            <li>
            <h2>${course.title}</h2>
            <p>${course.description}</p>
            </li>
        `
    })
    listCourseBlock.innerHTML = htmls.join('')
}

function createCourse(data,callback){
    var options ={
        method: 'POST',
        headers: {
            'Content-Type': 'application/json'
          },
        body: JSON.stringify(data)
    }
    fetch(courseApi,options)
        .then(function(response){
            response.json()
        })
        .then(callback)
}

function headlerCreateForm(){
    var createBtn = document.querySelector('#create');

    createBtn.onclick = function(){
        var title = document.querySelector('input[name="title"]').value;
        var description = document.querySelector('input[name="description"]').value;

        var formData = {
            title: title,
            description: description
        }
        createCourse(formData,function(){
            getCourses(function (courses) {
                renderCourses(courses);
            });
        })
    }
}