function setInnerHTML(element, innerHTML) {
    element.innerHTML = innerHTML;
}

function setElementAttribute(element, attribute, value) {
    element.setAttribute(attribute, value);
}

function setElementStyle(element, styleName, value) {
    element.setAttribute("style", `${styleName}: ${value}`);
}