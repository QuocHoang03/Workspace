var users = [
    {
        id: 1,
        name: 'Phạm Quốc Hoàng 1',
    },
    {
        id: 2,
        name: 'Phạm Quốc Hoàng 2',
    },
    {
        id: 3,
        name: 'Phạm Quốc Hoàng 3',
    },
];
// ------------------------------- //

var comments = [
    {
        id: 1,
        user_id: 1,
        comment: 'Đây là comment của demo 1',
    },
    {
        id: 2,
        user_id: 2,
        comment: 'Đây là comment của demo 2',
    },
    {
        id: 3,
        user_id: 3,
        comment: 'Đây là comment của demo 3',
    },
];
// ------------------------------- //

function getComments() {
    return new Promise(function (resolve) {
        resolve(comments);
    });
}

function getUsersByIds(userIds) {
    return new Promise(function (resolve) {
        var result = users.filter(function (user) {
            return userIds.includes(user.id)
        })
        resolve(result)
    })
}

getComments()
    .then(function () {
        var userIds = comments.map(function (comment) {
            return comment.user_id;
        })
        // console.log(userIds)
        return getUsersByIds(userIds)
            .then(function (users) {

                // return về data
                return {
                    users: users,
                    comments: comments,
                }
            })
    })

    // lấy data
    .then(function (data) {
        var commentBlock = document.getElementById('commentBlock');

        var html = ''
        data.comments.forEach(function (comment) {
            var userComment = data.users.find(function (user) {
                return user.id === comment.user_id
            })
            html += `<li>${userComment.name}: ${comment.comment}</li>`
        })
        commentBlock.innerHTML = html;
    })




