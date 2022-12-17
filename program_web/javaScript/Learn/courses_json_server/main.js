var courseApi = 'http://localhost:3000/courses';

// --------------------------------
function start() {
    getCourses(renderCourses);
    handleCourse();
}
start();

// --------------------------------
function getCourses(callback) {
    fetch(courseApi)
        .then(function (response) {
            return response.json();
        })
        .then(callback)
}

function renderCourses(courses) {
    var listCoursesBlock = document.querySelector('#list-courses');

    var htmls = courses.map(function (course) {
        return `
            <li class="course-item-${course.id}">
                <h4>${course.title}</h4>
                <p>${course.description}</p>
                
                <button onclick="handleDeleteCourse(${course.id})">Delete</button>
            </li>
        `;
    });
    listCoursesBlock.innerHTML = htmls.join('')
}


// --------------------------------
function createCourse(formData, callback) {
    var options = {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json'
        },
        body: JSON.stringify(formData)
    }
    fetch(courseApi, options)
        .then(function (response) {
            response.json()
        })
        .then(callback)
}

function handleCourse() {
    var createBtn = document.querySelector('#create')
    createBtn.onclick = function () {
        var title = document.querySelector('input[name="title"]').value;
        var description = document.querySelector('input[name="description"]').value;
        var img = document.querySelector('input[name="img"]').value;

        formData = {
            title: title,
            description: description,
            img:img,
        }
        createCourse(formData, function () {
            getCourses(renderCourses);
        });
    }
}

// --------------------------------
function handleDeleteCourse(id){
    var options = {
        method: 'DELETE',
        headers: {
            'Content-Type': 'application/json'
        },
    }
    fetch(courseApi+'/'+id, options)
        .then(function (response) {
            response.json()
        })
        .then(function(){
            var courseItem = document.querySelector('.course-item-'+id);
            if(courseItem){
                courseItem.remove();
            }
        })
}


