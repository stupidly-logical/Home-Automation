from flask import Flask, request, render_template
import serial

s = serial.Serial('/dev/ttyACM0',9600)
#import modules to drive arduino

#set up serial comm


app = Flask(__name__)

@app.route('/')
def index():
	return render_template('home_automation.html')
@app.route('/s1_1')
def s1_1():
	#swtchon Relay switch 1
	s.write('b'.encode())
	return render_template('home_automation.html')
@app.route('/s1_0')
def s1_0():
	s.write('a'.encode())
	#switchoff Relay switch 1
	return render_template('home_automation.html')
@app.route('/s2_1')
def s2_1():
	#swtchon Relay switch 1
	s.write('d'.encode())
	return render_template('home_automation.html')
@app.route('/s2_0')
def s2_0():
	s.write('c'.encode())
	#switchoff Relay switch 1
	return render_template('home_automation.html')
@app.route('/s3_1')
def s3_1():
	#swtchon Relay switch 1
	s.write('f'.encode())
	return render_template('home_automation.html')
@app.route('/s3_0')
def s3_0():
	s.write('e'.encode())
	#switchoff Relay switch 1
	return render_template('home_automation.html')
@app.route('/s4_1')
def s4_1():
	#swtchon Relay switch 1
	s.write('h'.encode())
	return render_template('home_automation.html')
@app.route('/s4_0')
def s4_0():
	s.write('g'.encode())
	#switchoff Relay switch 1
	return render_template('home_automation.html')

@app.route('/s5_1')
def s5_1():
	#swtchon Relay switch 1
	s.write('j'.encode())
	return render_template('home_automation.html')
@app.route('/s5_0')
def s5_0():
	s.write('i'.encode())
	#switchoff Relay switch 1
	return render_template('home_automation.html')
@app.route('/s6_1')
def s6_1():
	#swtchon Relay switch 1
	s.write('l'.encode())
	return render_template('home_automation.html')
@app.route('/s6_0')
def s6_0():
	s.write('k'.encode())
	#switchoff Relay switch 1
	return render_template('home_automation.html')
@app.route('/s7_1')
def s7_1():
	#swtchon Relay switch 1
	s.write('n'.encode())
	return render_template('home_automation.html')
@app.route('/s7_0')
def s7_0():
	s.write('m'.encode())
	#switchoff Relay switch 1
	return render_template('home_automation.html')
@app.route('/s8_1')
def s8_1():
	#swtchon Relay switch 1
	s.write('p'.encode())
	return render_template('home_automation.html')
@app.route('/s8_0')
def s8_0():
	s.write('o'.encode())
	#switchoff Relay switch 1
	return render_template('home_automation.html')

if __name__ == '__main__':
	app.run(debug=True,host='0.0.0.0')
