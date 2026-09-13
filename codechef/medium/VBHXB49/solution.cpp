const path = require('path');

const relativePath = path.join('books', 'fiction', 'The_Great_Novel.pdf');

const absolutePath = path.resolve(relativePath);

const fileName = path.basename(absolutePath);
const directory = path.dirname(absolutePath);
const newFileName = path.basename(fileName, '.pdf') + '.epub';

const newAbsolutePath = path.join(directory, newFileName);

console.log('Original Absolute Path:', absolutePath);
console.log('New Absolute Path:', newAbsolutePath);