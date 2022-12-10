const $ = document.querySelector.bind(document)
const $$ = document.querySelectorAll.bind(document)

const tabs = $$('.tab-item')
const panes = $$('.tab-pane')

tabs.forEach((tab,index) => {
    tab.onclick = function(){
        const pane = panes[index]
        $('.tab-item.active').classList.remove('active')
        $('.tab-pane.active').classList.remove('active')

        this.classList.add('active')
        pane.classList.add('active')
    }
});