#pragma once
//Nessesary for file reading, writing and creating files
#include <fstream>
#include <sstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>
namespace TrabajoRecursividad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//Not sure why they are nedded but they are, both of them
	using namespace std;
	using std::ifstream;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_fib;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_fib;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_resultado;
	private: System::Windows::Forms::Label^ label_fact;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_fact;
	private: System::Windows::Forms::Button^ button_fact;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label_prueva;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button_guardar;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_multi1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_multi2;
	private: System::Windows::Forms::Label^ label_multi;
	private: System::Windows::Forms::Button^ button_multi;
	private: System::Windows::Forms::TextBox^ textBox_palindro;
	private: System::Windows::Forms::Button^ button_palindro;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label_palindro;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_Convertido;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_base;
	private: System::Windows::Forms::Label^ label_convertir2;
	private: System::Windows::Forms::Button^ button_Convertir2;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_fib = (gcnew System::Windows::Forms::Button());
			this->numericUpDown_fib = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_resultado = (gcnew System::Windows::Forms::Label());
			this->label_fact = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_fact = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_fact = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label_prueva = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button_guardar = (gcnew System::Windows::Forms::Button());
			this->numericUpDown_multi1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_multi2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_multi = (gcnew System::Windows::Forms::Label());
			this->button_multi = (gcnew System::Windows::Forms::Button());
			this->textBox_palindro = (gcnew System::Windows::Forms::TextBox());
			this->button_palindro = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label_palindro = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_Convertido = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_base = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_convertir2 = (gcnew System::Windows::Forms::Label());
			this->button_Convertir2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_fib))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_fact))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_multi1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_multi2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Convertido))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_base))->BeginInit();
			this->SuspendLayout();
			// 
			// button_fib
			// 
			this->button_fib->Location = System::Drawing::Point(12, 98);
			this->button_fib->Name = L"button_fib";
			this->button_fib->Size = System::Drawing::Size(75, 23);
			this->button_fib->TabIndex = 0;
			this->button_fib->Text = L"Calcular";
			this->button_fib->UseVisualStyleBackColor = true;
			this->button_fib->Click += gcnew System::EventHandler(this, &MyForm::button_fib_Click);
			// 
			// numericUpDown_fib
			// 
			this->numericUpDown_fib->Location = System::Drawing::Point(12, 58);
			this->numericUpDown_fib->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown_fib->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_fib->Name = L"numericUpDown_fib";
			this->numericUpDown_fib->Size = System::Drawing::Size(120, 20);
			this->numericUpDown_fib->TabIndex = 1;
			this->numericUpDown_fib->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Calculardor de Fibonacci";
			// 
			// label_resultado
			// 
			this->label_resultado->AutoSize = true;
			this->label_resultado->Location = System::Drawing::Point(150, 60);
			this->label_resultado->Name = L"label_resultado";
			this->label_resultado->Size = System::Drawing::Size(49, 13);
			this->label_resultado->TabIndex = 3;
			this->label_resultado->Text = L"Numeros";
			// 
			// label_fact
			// 
			this->label_fact->AutoSize = true;
			this->label_fact->Location = System::Drawing::Point(150, 186);
			this->label_fact->Name = L"label_fact";
			this->label_fact->Size = System::Drawing::Size(49, 13);
			this->label_fact->TabIndex = 7;
			this->label_fact->Text = L"Numeros";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Calculardor de Factorial";
			// 
			// numericUpDown_fact
			// 
			this->numericUpDown_fact->Location = System::Drawing::Point(12, 179);
			this->numericUpDown_fact->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown_fact->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_fact->Name = L"numericUpDown_fact";
			this->numericUpDown_fact->Size = System::Drawing::Size(120, 20);
			this->numericUpDown_fact->TabIndex = 5;
			this->numericUpDown_fact->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button_fact
			// 
			this->button_fact->Location = System::Drawing::Point(12, 219);
			this->button_fact->Name = L"button_fact";
			this->button_fact->Size = System::Drawing::Size(75, 23);
			this->button_fact->TabIndex = 4;
			this->button_fact->Text = L"Calcular";
			this->button_fact->UseVisualStyleBackColor = true;
			this->button_fact->Click += gcnew System::EventHandler(this, &MyForm::button_fact_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 293);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Leer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label_prueva
			// 
			this->label_prueva->AutoSize = true;
			this->label_prueva->Location = System::Drawing::Point(12, 335);
			this->label_prueva->Name = L"label_prueva";
			this->label_prueva->Size = System::Drawing::Size(49, 13);
			this->label_prueva->TabIndex = 9;
			this->label_prueva->Text = L"Numeros";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog_selector";
			// 
			// button_guardar
			// 
			this->button_guardar->Location = System::Drawing::Point(115, 293);
			this->button_guardar->Name = L"button_guardar";
			this->button_guardar->Size = System::Drawing::Size(75, 23);
			this->button_guardar->TabIndex = 10;
			this->button_guardar->Text = L"Guardar";
			this->button_guardar->UseVisualStyleBackColor = true;
			this->button_guardar->Click += gcnew System::EventHandler(this, &MyForm::button_guardar_Click);
			// 
			// numericUpDown_multi1
			// 
			this->numericUpDown_multi1->Location = System::Drawing::Point(308, 58);
			this->numericUpDown_multi1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown_multi1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_multi1->Name = L"numericUpDown_multi1";
			this->numericUpDown_multi1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown_multi1->TabIndex = 11;
			this->numericUpDown_multi1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown_multi2
			// 
			this->numericUpDown_multi2->Location = System::Drawing::Point(515, 58);
			this->numericUpDown_multi2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown_multi2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_multi2->Name = L"numericUpDown_multi2";
			this->numericUpDown_multi2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown_multi2->TabIndex = 12;
			this->numericUpDown_multi2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label_multi
			// 
			this->label_multi->AutoSize = true;
			this->label_multi->Location = System::Drawing::Point(694, 65);
			this->label_multi->Name = L"label_multi";
			this->label_multi->Size = System::Drawing::Size(49, 13);
			this->label_multi->TabIndex = 13;
			this->label_multi->Text = L"Numeros";
			// 
			// button_multi
			// 
			this->button_multi->Location = System::Drawing::Point(434, 58);
			this->button_multi->Name = L"button_multi";
			this->button_multi->Size = System::Drawing::Size(75, 23);
			this->button_multi->TabIndex = 14;
			this->button_multi->Text = L"Calcular";
			this->button_multi->UseVisualStyleBackColor = true;
			this->button_multi->Click += gcnew System::EventHandler(this, &MyForm::button_multi_Click);
			// 
			// textBox_palindro
			// 
			this->textBox_palindro->Location = System::Drawing::Point(308, 176);
			this->textBox_palindro->Name = L"textBox_palindro";
			this->textBox_palindro->Size = System::Drawing::Size(120, 20);
			this->textBox_palindro->TabIndex = 15;
			// 
			// button_palindro
			// 
			this->button_palindro->Location = System::Drawing::Point(434, 176);
			this->button_palindro->Name = L"button_palindro";
			this->button_palindro->Size = System::Drawing::Size(75, 23);
			this->button_palindro->TabIndex = 16;
			this->button_palindro->Text = L"Verificar";
			this->button_palindro->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(305, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Calculardor de Multiplicaciones";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(305, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Verificador de Palindromos ";
			// 
			// label_palindro
			// 
			this->label_palindro->AutoSize = true;
			this->label_palindro->Location = System::Drawing::Point(545, 186);
			this->label_palindro->Name = L"label_palindro";
			this->label_palindro->Size = System::Drawing::Size(79, 13);
			this->label_palindro->TabIndex = 19;
			this->label_palindro->Text = L"Es palindromo\?";
			// 
			// numericUpDown_Convertido
			// 
			this->numericUpDown_Convertido->Location = System::Drawing::Point(308, 293);
			this->numericUpDown_Convertido->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown_Convertido->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_Convertido->Name = L"numericUpDown_Convertido";
			this->numericUpDown_Convertido->Size = System::Drawing::Size(120, 20);
			this->numericUpDown_Convertido->TabIndex = 20;
			this->numericUpDown_Convertido->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown_base
			// 
			this->numericUpDown_base->Location = System::Drawing::Point(444, 293);
			this->numericUpDown_base->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown_base->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_base->Name = L"numericUpDown_base";
			this->numericUpDown_base->Size = System::Drawing::Size(120, 20);
			this->numericUpDown_base->TabIndex = 21;
			this->numericUpDown_base->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label_convertir2
			// 
			this->label_convertir2->AutoSize = true;
			this->label_convertir2->Location = System::Drawing::Point(409, 335);
			this->label_convertir2->Name = L"label_convertir2";
			this->label_convertir2->Size = System::Drawing::Size(49, 13);
			this->label_convertir2->TabIndex = 22;
			this->label_convertir2->Text = L"Numeros";
			// 
			// button_Convertir2
			// 
			this->button_Convertir2->Location = System::Drawing::Point(599, 293);
			this->button_Convertir2->Name = L"button_Convertir2";
			this->button_Convertir2->Size = System::Drawing::Size(75, 23);
			this->button_Convertir2->TabIndex = 23;
			this->button_Convertir2->Text = L"Convertir";
			this->button_Convertir2->UseVisualStyleBackColor = true;
			this->button_Convertir2->Click += gcnew System::EventHandler(this, &MyForm::button_Convertir2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(940, 390);
			this->Controls->Add(this->button_Convertir2);
			this->Controls->Add(this->label_convertir2);
			this->Controls->Add(this->numericUpDown_base);
			this->Controls->Add(this->numericUpDown_Convertido);
			this->Controls->Add(this->label_palindro);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_palindro);
			this->Controls->Add(this->textBox_palindro);
			this->Controls->Add(this->button_multi);
			this->Controls->Add(this->label_multi);
			this->Controls->Add(this->numericUpDown_multi2);
			this->Controls->Add(this->numericUpDown_multi1);
			this->Controls->Add(this->button_guardar);
			this->Controls->Add(this->label_prueva);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_fact);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown_fact);
			this->Controls->Add(this->button_fact);
			this->Controls->Add(this->label_resultado);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown_fib);
			this->Controls->Add(this->button_fib);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_fib))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_fact))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_multi1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_multi2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Convertido))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_base))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int Fibonacci(int n)
		{
			if (n > 1)
			{
				return Fibonacci(n - 1) + Fibonacci(n - 2);
			}
			else if (n < 0)
			{
				return -1;
			}
			else
			{
				return n;
			}
		}
		int factorial(int n)
		{
			if (n <= 1)
			{
				return 1;
			}
			else
			{
				return n * factorial(n - 1);
			}
		}
		int DecABin(int n)
		{
			int nbin;
			if (n > 0)
			{
				nbin = n % 2 + 10 * (DecABin(n / 2));
				return nbin;
			}
			else
			{
				return 0;
			}
		}
		int MultiplicacionRecursiva(int i, int j)
		{
			if (i == 0 || j == 0)
			{
				return 0;
			}
			else
			{
				return i + MultiplicacionRecursiva(i, j - 1);
			}
		}
		int palindromoChecker(String^ palabra, int Aderecha, int Aizquierda)
		{
			//si qeuda impar la palabra 
			if (Aderecha == Aizquierda)
			{
				return 1;
			}
			//si queda par la palabra
			if (Aizquierda - Aderecha == 1)
			{
				return 1;
			}
			if (palabra[Aderecha] == palabra[Aizquierda])
			{
				return palindromoChecker(palabra, Aderecha + 1, Aizquierda - 1);
			}
			//verifica que no puede ser palindroma
			else
			{
				return 0;
			}
		}
		int ConvertirDec(int num, int base)
		{
			if (num == 0)
			{
				return 0;
			}
			else
			{

				return ConvertirDec(num / base, base) + (num % base);
			}
		}

#pragma endregion
	private: System::Void button_fib_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int n = Convert::ToInt16(numericUpDown_fib->Text);
		int numFib = 0;
		String^ desplegable ="";
		for (int i = 0; i <= n; i++)
		{
			numFib = Fibonacci(i);
			if (numFib < 0)
			{
				label_resultado->Text = "Error";
				i = n;
			}
			else
			{
				desplegable = desplegable + Convert::ToString(numFib) + ",";
			}
		}
		label_resultado->Text = desplegable;
	}
	private: System::Void button_fact_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int n = Convert::ToInt16(numericUpDown_fact->Text);
		label_fact->Text = Convert::ToString(factorial(n));
	}

	void split_str(std::string const& str, const char delim,
		std::vector <std::string>& out)
	{
		// create a stream from the string  
		std::stringstream s(str);

		std::string s2;
		while (std::getline(s, s2, delim))
		{
			out.push_back(s2); // store the string in s2  
		}
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
	String^ archivo = openFileDialog1->FileName;
	string datos = "";
	String^ dato;
	int numero;
	int convertir = 0;
	ifstream hoja(msclr::interop::marshal_as<string >(archivo));
	ofstream resultados("resultados");
	while (getline (hoja, datos))
	{
		//datos = msclr::interop::marshal_as<std::string >(dato);
		//Can convert managed string to unmanaged
		std::vector <std::string> out;
		split_str(datos, ',', out);
		for (const auto& s2 : out)
		{
			std::cout << "\n" << s2;
			label_prueva->Text = msclr::interop::marshal_as<String^ >(s2);
			convertir = stoi(s2);
			convertir = DecABin(convertir);
			dato = dato +","+ Convert::ToString(convertir);
		}
		label_prueva->Text = Convert::ToString(dato);
	}
	}

}
private: System::Void button_guardar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (label_prueva->Text != "Numeros")
	{
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ datos = label_prueva->Text;
			String^ nombre = saveFileDialog1->FileName;
			ofstream nuevoArchivo(msclr::interop::marshal_as<string>(nombre));
			nuevoArchivo << msclr::interop::marshal_as<string>(datos);
		}
	}
}
private: System::Void button_multi_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int i = Convert::ToInt16(numericUpDown_multi1);
	int j = Convert::ToInt16(numericUpDown_multi2);
	label_multi->Text = Convert::ToString(MultiplicacionRecursiva(i,j));
}
private: System::Void button_Convertir2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int i = Convert::ToInt16(numericUpDown_Convertido);
	int j = Convert::ToInt16(numericUpDown_base);
	label_convertir2->Text = Convert::ToString(ConvertirDec(i, j));
}
};
}
