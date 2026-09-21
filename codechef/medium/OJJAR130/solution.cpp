
    const handleFormSubmit = () => {
        // --- TODO: Update to log the formData object ---
        console.log("Form Data Submitted:", {
            fullName, email, phone, address, jobTitle, company, yearsExperience, skills, agreeTerms
        });
        setIsSubmitted(true);
    };

    // --- SOLUTION (Step 5): Conditionally render success message ---
    if (isSubmitted) {
      return (
        <div className="submission-success">
          <h2>Application Submitted Successfully!</h2>
          <p>Thank you, {fullName || "Applicant"}. Your application has been received.</p>
          <p>We will contact you via email ({email || "your provided email"}) if shortlisted.</p>
        </div>
      );
    }

    return (
        <div className="tabs-container">
            <div className="tab-headers">
                <button className={`tab-header ${activeTabIndex === 0 ? 'active' : ''}`} onClick={() => onTabClick(0)}>1. Personal Info</button>
                <button className={`tab-header ${activeTabIndex === 1 ? 'active' : ''}`} onClick={() => onTabClick(1)}>2. Experience</button>
                <button className={`tab-header ${activeTabIndex === 2 ? 'active' : ''}`} onClick={() => onTabClick(2)}>3. Review & Submit</button>
            </div>

            <div className="tab-content">
                {activeTabIndex === 0 && (
                    <div>
                        <h2>Personal Information</h2>
                        <p>Please provide your contact details. Fields marked with * are required.</p>
                        <div className="form-section">