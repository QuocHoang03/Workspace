function highLight([first, ...strings],...values){
    return values.reduce(function(acc,curr){
        return [...acc,`<span>${curr}</span>`,strings.shift()]
    },[first]
    ).join('')
}


var brand = 'F8'
var course = 'Javascript'

var html = highLight`Học lập trình ${course} tại ${brand} !`
console.log(html)