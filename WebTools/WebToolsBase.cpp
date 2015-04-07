//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: WebToolsBase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "WebToolsBase.h"


// Declare the bitmap loading function
extern void wxCD9C6InitBitmapResources();

static bool bBitmapLoaded = false;


WebToolsSettingsBase::WebToolsSettingsBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCD9C6InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);
    
    m_notebook10 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxBK_DEFAULT);
    
    boxSizer2->Add(m_notebook10, 1, wxALL|wxEXPAND, 5);
    
    m_panel12 = new wxPanel(m_notebook10, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook10->AddPage(m_panel12, _("JavaScript"), false);
    
    wxBoxSizer* boxSizer22 = new wxBoxSizer(wxVERTICAL);
    m_panel12->SetSizer(boxSizer22);
    
    wxArrayString m_pgMgrArr;
    wxUnusedVar(m_pgMgrArr);
    wxArrayInt m_pgMgrIntArr;
    wxUnusedVar(m_pgMgrIntArr);
    m_pgMgr = new wxPropertyGridManager(m_panel12, wxID_ANY, wxDefaultPosition, wxSize(300,400), wxPG_DESCRIPTION|wxPG_SPLITTER_AUTO_CENTER|wxPG_BOLD_MODIFIED);
    
    boxSizer22->Add(m_pgMgr, 1, wxALL|wxEXPAND, 5);
    
    m_pgProp26 = m_pgMgr->Append(  new wxPropertyCategory( _("General") ) );
    m_pgProp26->SetHelpString(wxT(""));
    
    m_pgPropEnableJSCC = m_pgMgr->AppendIn( m_pgProp26,  new wxBoolProperty( _("Enable Code Completion"), wxPG_LABEL, 1) );
    m_pgPropEnableJSCC->SetHelpString(_("Enable JavaScript code completion"));
    
    m_pgPropLogging = m_pgMgr->AppendIn( m_pgProp26,  new wxBoolProperty( _("Verbose Logging"), wxPG_LABEL, 1) );
    m_pgPropLogging->SetHelpString(_("The JavaScript code completion uses the \"tern\" engine.\nCheck this option to start tern in verbose mode"));
    
    m_pgProp32 = m_pgMgr->Append(  new wxPropertyCategory( _("Libraries") ) );
    m_pgProp32->SetHelpString(_("Enable Code Completion for the selected libraries"));
    
    m_pgPropEcma5 = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("Ecma5"), wxPG_LABEL, 1) );
    m_pgPropEcma5->SetHelpString(wxT(""));
    
    m_pgPropEcma6 = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("Ecma6"), wxPG_LABEL, 1) );
    m_pgPropEcma6->SetHelpString(wxT(""));
    
    m_pgPropJQuery = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("jQuery"), wxPG_LABEL, 1) );
    m_pgPropJQuery->SetHelpString(_("Support Code Completion for jQuery framework"));
    
    m_pgPropUnderscore = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("Underscore"), wxPG_LABEL, 1) );
    m_pgPropUnderscore->SetHelpString(_("Enable code completion for the Underscore library"));
    
    m_pgPropBrowser = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("Browser"), wxPG_LABEL, 1) );
    m_pgPropBrowser->SetHelpString(_("Enable code completion for browser mode (DOM, document, window etc)"));
    
    m_pgPropChai = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("Chai"), wxPG_LABEL, 1) );
    m_pgPropChai->SetHelpString(_("Enable code completion for the chain assertion library"));
    
    m_pgProp46 = m_pgMgr->Append(  new wxPropertyCategory( _("Plugins") ) );
    m_pgProp46->SetHelpString(wxT(""));
    
    m_pgPropAngular = m_pgMgr->AppendIn( m_pgProp46,  new wxBoolProperty( _("Angular"), wxPG_LABEL, 1) );
    m_pgPropAngular->SetHelpString(_("Adds the angular object to the top-level environment, and tries to wire up some of the bizarre dependency management scheme from this library, so that dependency injections get the right types"));
    
    m_pgPropStrings = m_pgMgr->AppendIn( m_pgProp46,  new wxBoolProperty( _("Strings"), wxPG_LABEL, 1) );
    m_pgPropStrings->SetHelpString(_("When enabled, this plugin will gather (short) strings in your code, and completing when inside a string will try to complete to previously seen strings"));
    
    m_pgPropNode = m_pgMgr->AppendIn( m_pgProp46,  new wxBoolProperty( _("Node.js"), wxPG_LABEL, 1) );
    m_pgPropNode->SetHelpString(_("Provides variables that are part of the node environment, such as process and require, and hooks up require to try and find the dependencies that are being loaded, and assign them the correct types. It also includes types for the built-in modules that node.js provides (\"fs\", \"http\", etc)"));
    
    m_stdBtnSizer4 = new wxStdDialogButtonSizer();
    
    boxSizer2->Add(m_stdBtnSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer4->AddButton(m_buttonCancel);
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer4->AddButton(m_buttonOK);
    m_stdBtnSizer4->Realize();
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_pgMgr->Connect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(WebToolsSettingsBase::OnJSValueChanged), NULL, this);
    m_buttonOK->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(WebToolsSettingsBase::OnOKUI), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnOK), NULL, this);
    
}

WebToolsSettingsBase::~WebToolsSettingsBase()
{
    m_pgMgr->Disconnect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(WebToolsSettingsBase::OnJSValueChanged), NULL, this);
    m_buttonOK->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(WebToolsSettingsBase::OnOKUI), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnOK), NULL, this);
    
}
