function changeParaText(event) {
	event.target.innerText = 'Yay! you added the event listener.'
}

// Start your code here ---->
document.querySelector('p').addEventListener('click', changeParaText);