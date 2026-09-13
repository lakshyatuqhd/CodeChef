const fs = require('fs');
const path = require('path');

const initialFileName = 'example.txt';
const organizedFileName = 'organized_file.txt';

const initialFilePath = path.resolve(__dirname, initialFileName);
const organizedFilePath = path.resolve(__dirname, organizedFileName);

if (!fs.existsSync(initialFilePath)) {
    fs.writeFileSync(initialFilePath, '');
        console.log(`Created new file: ${initialFileName}`);
        }

        fs.appendFileSync(initialFilePath, 'File organized!');

        fs.renameSync(initialFilePath, organizedFilePath);

        console.log(`Appended "File organized!" to ${initialFileName}`);
        console.log(`File renamed to ${organizedFileName}`);