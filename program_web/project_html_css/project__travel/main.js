const $ = document.querySelector.bind(document);
const $$ = document.querySelectorAll.bind(document);

const sliderTabs = $$('.slider__tour-next-item');
const sliderTours = $$('.slider__tour');

sliderTabs.forEach((tab, index) => {
    tab.onclick = function () {
        const tour = sliderTours[index];
        $('.slider__tour.slider__tour--active').classList.remove('slider__tour--active');

        tour.classList.add('slider__tour--active');
    }
});