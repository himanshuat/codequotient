/* ladder object has already been declared */
const ladder = {
	steps: 0
};

/* Type your javascript code below */

ladder.setSteps = function (steps) {
    this.steps = steps;
}

ladder.getSteps = function () {
    return this.steps;
}

ladder.stepUp = function (steps) {
    this.steps++;
}

ladder.stepDown = function (steps) {
    this.steps--;
}