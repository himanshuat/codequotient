const myDiv = document.getElementById('my-div');

function changeBackgroundToRed() {
    myDiv.style.backgroundColor = 'red';
}

myDiv.onclick = changeBackgroundToRed;