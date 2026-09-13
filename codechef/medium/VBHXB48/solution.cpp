const path = require('path');

const reportsDir = 'reports';
const yearDir = '2024';
const fileName = 'sales.txt';

const relativePath = path.join(reportsDir, yearDir, fileName);

const absolutePath = path.resolve(relativePath);

const baseName = path.basename(absolutePath);
const extName = path.extname(absolutePath);
const dirName = path.dirname(absolutePath);

console.log('Relative Path:', relativePath);
console.log('Absolute Path:', absolutePath);
console.log('Base Name:', baseName);
console.log('Extension:', extName);
console.log('Directory Name:', dirName);