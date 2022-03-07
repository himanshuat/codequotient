const myDiv = document.getElementById('my-div');

function removeOnMouseLeave() {
    myDiv.removeEventListener('mouseleave', changeWhite);
}