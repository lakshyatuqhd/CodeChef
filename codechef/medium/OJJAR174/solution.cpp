</Button>

<p>Primary Button (should have classes "btn btn-primary"):</p>
<Button
className="btn-primary"
onClick={() => alert('Primary clicked!')}
>
Primary Button
</Button>

<p>Secondary Button (should still be type="button"):</p>
<Button
type="submit"
className="btn-secondary"
onClick={() => alert('Secondary clicked!')}
>
Secondary (Still a Button)
</Button>

<p>Disabled Button:</p>
<Button disabled>
Disabled Button
</Button>
</div>
);
}

export default App;