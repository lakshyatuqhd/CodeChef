case 'ArrowRight':
console.log('ArrowRight pressed');
break;
case 'ArrowUp':
console.log('ArrowUp pressed');
break;
case 'ArrowDown':
console.log('ArrowDown pressed');
break;
default:
break;
}
};

window.addEventListener('keydown', handleKeyDown);

return () => {
window.removeEventListener('keydown', handleKeyDown);
};
}, []);

return (
<div>
<h1>Handling Player Input</h1>
<p>Press arrow keys to see logs in the console.</p>
</div>
);
}