git clone https://github.com/C2O-Chaos-to-Order/The-UNIVERSALIS-Ecosystem.git
cd The-UNIVERSALIS-Ecosystem
git checkout ab78d4ac09e353e12746c9a9df6d7980f432b9ec
cd scaffold
python -m unittest discover -s tests -p "test_validate_records.py" -v