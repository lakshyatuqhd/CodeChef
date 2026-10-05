                if(name === 'phone'){
                        if(value &&!PHONE_REGEX.test(value)){
                                return "Please enter a valid phone number.";
                        }
                }
                if(name === 'address'){
                        if(!value || value.trim().length < 5){
                                return "Please enter a valid Address.";
                        }
                }
                if(name === 'agreeTerms'){
                        if(!value){
                                return "You must agree to the terms and conditions.";
                        }
                }
                return null;
        };
        const handleInputChange = (e) => {
                const {name, value} = e.target;
                setFormData(prev => ({...prev, [name]: value}));
                if(formErrors[name]){
                        setFormErrors(prev => ({...prev, [name]: null}));
                }
        };
        const handleBlur = (e) => {
                const {name, value} = e.target;
                const error = validateField(name, value);
                setFormErrors(prev => ({...prev, [name]: error}));
        };
        const handleAgreeTermsChange = (e) => {
                const checked = e.target.checked;
                setAgreeTerms(checked);
                if(formErrors.agreeTerms){
                        setFormErrors(prev => ({...prev, agreeTerms: null}));