<p>Content for Personal Info will go here.</p>
</div>
)}

{currentActiveTab === 1 && (
<div>
<h2>Work Experience & Skills</h2>
<p>Content for Experience will go here.</p>
</div>
)}

{currentActiveTab === 2 && (
<div>
<h2>Review Your Application</h2>
<p>Content for Review & Submit will go here.</p>
</div>
)}
</div>

<div className="tab-navigation">
<button>Previous</button>
<button>Next</button>
</div>
</div>
);
}

export default Tabs;