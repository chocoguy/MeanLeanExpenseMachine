///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MLEMGui.h"

///////////////////////////////////////////////////////////////////////////

MainForm::MainForm( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxFrame( parent, id, title, pos, size, style, name )
{
	this->SetSizeHints( wxSize( 960,540 ), wxSize( 960,540 ) );
	this->SetBackgroundColour( wxColour( 43, 54, 76 ) );

	toolbarMainForm = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY );
	toolbarMainForm->SetToolSeparation( 10 );
	toolbarMainForm->SetToolPacking( 50 );
	toolbarMainForm->SetMinSize( wxSize( -1,30 ) );
	toolbarMainForm->SetMaxSize( wxSize( -1,30 ) );

	toolExpenses = toolbarMainForm->AddTool( wxID_ANY, wxT("Expenses"), wxBitmap( wxT("resources/dollarsign.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("Expenses"), wxEmptyString, NULL );

	toolBudgets = toolbarMainForm->AddTool( wxID_ANY, wxT("Budgets"), wxBitmap( wxT("resources/budgetsign.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("Budgets"), wxEmptyString, NULL );

	toolFunFacts = toolbarMainForm->AddTool( wxID_ANY, wxT("Fun Facts"), wxBitmap( wxT("resources/chart.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("Fun Facts"), wxEmptyString, NULL );

	toolSettings = toolbarMainForm->AddTool( wxID_ANY, wxT("Settings"), wxBitmap( wxT("resources/gear.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("Settings"), wxEmptyString, NULL );

	toolAbout = toolbarMainForm->AddTool( wxID_ANY, wxT("About"), wxBitmap( wxT("resources/info.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("About"), wxEmptyString, NULL );

	toolbarMainForm->Realize();


	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( toolExpenses->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainForm::evtToolExpenses_Click ) );
	this->Connect( toolBudgets->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainForm::evtToolBudgets_Click ) );
	this->Connect( toolFunFacts->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainForm::evtToolFunFacts_Click ) );
	this->Connect( toolSettings->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainForm::evtToolSettings_Click ) );
	this->Connect( toolAbout->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainForm::evtToolAbout_Click ) );
}

MainForm::~MainForm()
{
	// Disconnect Events
	this->Disconnect( toolExpenses->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainForm::evtToolExpenses_Click ) );
	this->Disconnect( toolBudgets->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainForm::evtToolBudgets_Click ) );
	this->Disconnect( toolFunFacts->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainForm::evtToolFunFacts_Click ) );
	this->Disconnect( toolSettings->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainForm::evtToolSettings_Click ) );
	this->Disconnect( toolAbout->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainForm::evtToolAbout_Click ) );

}

HomePanel::HomePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	this->SetBackgroundColour( wxColour( 43, 54, 76 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	imgLogo = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("resources/MLEMLogo.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( imgLogo, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 1 );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Mean Lean Expense Machine"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	m_staticText1->SetForegroundColour( wxColour( 255, 255, 255 ) );

	bSizer3->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("A simple expense tracker"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	m_staticText2->SetForegroundColour( wxColour( 255, 255, 255 ) );

	bSizer3->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );


	bSizer2->Add( 0, 0, 1, wxBOTTOM, 2 );


	this->SetSizer( bSizer2 );
	this->Layout();
}

HomePanel::~HomePanel()
{
}

ExpensesPanel::ExpensesPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	this->SetBackgroundColour( wxColour( 43, 54, 76 ) );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Expenses"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 18, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	m_staticText3->SetForegroundColour( wxColour( 255, 255, 255 ) );

	bSizer3->Add( m_staticText3, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP, 20 );

	btnAddExpense = new wxButton( this, wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0|wxBORDER_NONE );
	btnAddExpense->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	btnAddExpense->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	btnAddExpense->SetBackgroundColour( wxColour( 138, 201, 38 ) );

	bSizer3->Add( btnAddExpense, 0, wxALIGN_RIGHT|wxRIGHT, 120 );

	grdExpenses = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	grdExpenses->CreateGrid( 5, 9 );
	grdExpenses->EnableEditing( false );
	grdExpenses->EnableGridLines( false );
	grdExpenses->SetGridLineColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	grdExpenses->EnableDragGridSize( false );
	grdExpenses->SetMargins( 0, 0 );

	// Columns
	grdExpenses->SetColSize( 0, 80 );
	grdExpenses->SetColSize( 1, 80 );
	grdExpenses->SetColSize( 2, 80 );
	grdExpenses->SetColSize( 3, 80 );
	grdExpenses->SetColSize( 4, 80 );
	grdExpenses->SetColSize( 5, 80 );
	grdExpenses->SetColSize( 6, 73 );
	grdExpenses->SetColSize( 7, 80 );
	grdExpenses->SetColSize( 8, 80 );
	grdExpenses->EnableDragColMove( false );
	grdExpenses->EnableDragColSize( true );
	grdExpenses->SetColLabelValue( 0, wxT("Item") );
	grdExpenses->SetColLabelValue( 1, wxT("Amount") );
	grdExpenses->SetColLabelValue( 2, wxT("Category") );
	grdExpenses->SetColLabelValue( 3, wxT("Place") );
	grdExpenses->SetColLabelValue( 4, wxT("Date") );
	grdExpenses->SetColLabelValue( 5, wxT("Wasteful") );
	grdExpenses->SetColLabelValue( 6, wxT("ROI") );
	grdExpenses->SetColLabelValue( 7, wxT("Edit") );
	grdExpenses->SetColLabelValue( 8, wxT("Delete") );
	grdExpenses->SetColLabelAlignment( wxALIGN_LEFT, wxALIGN_CENTER );

	// Rows
	grdExpenses->EnableDragRowSize( true );
	grdExpenses->SetRowLabelSize( 0 );
	grdExpenses->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance
	grdExpenses->SetLabelBackgroundColour( wxColour( 255, 255, 255 ) );
	grdExpenses->SetLabelFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	grdExpenses->SetLabelTextColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	// Cell Defaults
	grdExpenses->SetDefaultCellBackgroundColour( wxColour( 255, 255, 255 ) );
	grdExpenses->SetDefaultCellTextColour( wxColour( 111, 111, 111 ) );
	grdExpenses->SetDefaultCellFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	grdExpenses->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer3->Add( grdExpenses, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();

	// Connect Events
	btnAddExpense->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ExpensesPanel::evtBtnAddExpense_Click ), NULL, this );
}

ExpensesPanel::~ExpensesPanel()
{
	// Disconnect Events
	btnAddExpense->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ExpensesPanel::evtBtnAddExpense_Click ), NULL, this );

}

BudgetsPanel::BudgetsPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	this->SetBackgroundColour( wxColour( 43, 54, 76 ) );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Budgets"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 18, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	m_staticText4->SetForegroundColour( wxColour( 255, 255, 255 ) );

	bSizer4->Add( m_staticText4, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP, 20 );

	btnAddBudget = new wxButton( this, wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, wxBORDER_NONE );
	btnAddBudget->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	btnAddBudget->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	btnAddBudget->SetBackgroundColour( wxColour( 138, 201, 38 ) );

	bSizer4->Add( btnAddBudget, 0, wxALIGN_RIGHT|wxRIGHT, 235 );

	grdBudgets = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	grdBudgets->CreateGrid( 5, 6 );
	grdBudgets->EnableEditing( false );
	grdBudgets->EnableGridLines( false );
	grdBudgets->EnableDragGridSize( false );
	grdBudgets->SetMargins( 0, 0 );

	// Columns
	grdBudgets->EnableDragColMove( false );
	grdBudgets->EnableDragColSize( true );
	grdBudgets->SetColLabelValue( 0, wxT("Name") );
	grdBudgets->SetColLabelValue( 1, wxT("Saved Amt") );
	grdBudgets->SetColLabelValue( 2, wxT("Target Amt") );
	grdBudgets->SetColLabelValue( 3, wxT("Added") );
	grdBudgets->SetColLabelValue( 4, wxT("Edited") );
	grdBudgets->SetColLabelValue( 5, wxT("Goal Met") );
	grdBudgets->SetColLabelAlignment( wxALIGN_LEFT, wxALIGN_CENTER );

	// Rows
	grdBudgets->EnableDragRowSize( true );
	grdBudgets->SetRowLabelSize( 0 );
	grdBudgets->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance
	grdBudgets->SetLabelBackgroundColour( wxColour( 255, 255, 255 ) );
	grdBudgets->SetLabelTextColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	// Cell Defaults
	grdBudgets->SetDefaultCellBackgroundColour( wxColour( 255, 255, 255 ) );
	grdBudgets->SetDefaultCellTextColour( wxColour( 111, 111, 111 ) );
	grdBudgets->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer4->Add( grdBudgets, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	// Connect Events
	btnAddBudget->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BudgetsPanel::evtBtnAddBudget_Click ), NULL, this );
}

BudgetsPanel::~BudgetsPanel()
{
	// Disconnect Events
	btnAddBudget->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BudgetsPanel::evtBtnAddBudget_Click ), NULL, this );

}
