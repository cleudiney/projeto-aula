let count = 0;

const CURRENT_NUMBER = document.getElementById('currentNumber');

function increment() 
{
	count++;
	CURRENT_NUMBER.innerHTML = count;
}

function decrement() 
{
	count--;
	CURRENT_NUMBER.innerHTML = count;
}

function test() 
{
	kdowkdpo;
}

const formulario = document.getElementById('lista1');
const checkLista1 = document.getElementById('coisas');

formulario.onsubmit = function (e) 
{
	e.preventDefault();
	const inputField = document.getElementById('checkLista1');
	addTask(inputField.value);
	formulario.reset();
};

function addTask(description) 
{
	const taskContainer = document.createElement('div');
	const newTask = document.createElement('input');
	const taskLabel = document.createElement('label');
	const taskDescriptionNode = document.createTextNode(description);

	newTask.setAttribute('type', 'checkbox');
	newTask.setAttribute('name', description);
	newTask.setAttribute('id', description);

	taskLabel.setAttribute('for', description);
	taskLabel.appendChild(taskDescriptionNode);

	taskContainer.classList.add('tarefas');
	taskContainer.appendChild(newTask);
	taskContainer.appendChild(taskLabel);

	checkLista1.appendChild(taskContainer);
}