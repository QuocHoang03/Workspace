var courses = ['HTML & CSS', 'Javascript', 'PHP', 'Java']

function render(courses) {
    var listCourses = courses.map(function(course){
        return `<li>${course}</li>`
    });
    var ulElement = document.querySelector('.courses-list');
    return ulElement.innerHTML = listCourses.join('');


}

render(courses)