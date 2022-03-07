function addDivWithSpans() {
    let div = document.createElement('div');
    div.id = "my-div";
    div.innerHTML = `<span>1</span><span>2</span><span>3</span><span>4</span>`;
    document.body.appendChild(div);
}

function removeParagraphs() {
    let paras = document.querySelectorAll('p');
    for (let i = 0; i < paras.length; ++i) {
        document.body.removeChild(paras[i]);
    }
}