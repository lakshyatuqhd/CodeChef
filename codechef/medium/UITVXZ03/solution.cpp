        console.log('Schema Fields:', Object.keys(productSchema.paths));

        // Replace with Atlas URI
        const uri = 'mongodb+srv://lakshyatagarapu_db_user:lucky@cluster0.mongodb.net/productDB?retryWrites=true&w=majority';

        // Connect to MongoDB Atlas
        mongoose.connect(uri)
          .then(() => {
              console.log('Connected to MongoDB Atlas');
                })
                  .catch((err) => {
                      console.log('Connected to MongoDB Atlas');
                        });

                        