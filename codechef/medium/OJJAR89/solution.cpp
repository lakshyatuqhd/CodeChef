<div className="input-group">
<input
type="number"
placeholder={`Current age: ${user.age}`}
value={ageInput}
onChange={(e) => setAgeInput(e.target.value)}
/>
<button onClick={updateAge}>Update Age</button>
</div>

{/* Input field and update button for updating city */}
<div className="input-group">
<input
type="text"
placeholder={`Current city: ${user.address.city}`}
value={cityInput}
onChange={(e) => setCityInput(e.target.value)}
/>
<button onClick={updateCity}>Update City</button>
</div>
</div>
);
}

export default ProfileUpdater;