const textarea = document.querySelector('textarea');
let codeid;

function run() {
    fetch("https://codequotient.com/api/executeCode", {
        method: "POST", 
        body: JSON.stringify({code: textarea.value, langid: 0})
    })
    .then(res => res.json())
    .then(data => console.log(data));
}

textarea.addEventListener('change', run);