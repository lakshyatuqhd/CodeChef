const removeGuest = (id) => {
setGuests(guests.filter(guest => guest.id !== id));
};

return (
<div className="container">
<h1>Guest List</h1>
<ul className="guest-list">
{guests.map((guest) => (
<li key={guest.id} className="guest-item">
<input defaultValue={guest.name} className="guest-input" />
<button
className="remove-btn"
onClick={() => removeGuest(guest.id)}
>
Remove
</button>
</li>
))}
</ul>
</div>
);
}

export default App;