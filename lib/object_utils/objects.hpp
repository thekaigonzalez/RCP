//
// Created by KG on 1/15/2021.
//
#include <tchar.h>
#include <iostream>
#include <utility>
#include <vector>
#include <windows.h>
#include <Lmcons.h>
#include <winbase.h>
#include <conio.h>
#include <string> /* std::string, std::to_string */
#include <fstream> /* Fstream::app, Fstream::binary */
#include <cstdio> /* printf, scanf, puts, NULL, nullptr */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#ifndef OBJECTS
#define OBJECTS
using namespace std;
vector<int> Submitter{ };

// Classic Stream Buffer
class Stream {
public:
    int x;
    char *v;
};

// Basic Alg Engine
class GlEngineRenderer {
public:
    string type_specifier{ };
    int max{ };
    int min{ };
};


// SH Default
class SubmissionHandler {
public:
    int s1;
    int s2;

    void submit( ) const {
        Submitter . push_back( s1 );
        Submitter . push_back( s2 );
    }

    static void table( ) {
        for ( int i : Submitter ) {
            printf( "%i, ", i );
        }
    }
};


// StrC Type
class StringCreator {
public:
    string ptr_name;
    string cur;
    int pt{ };
};

// Method Classdef
class MethodManager {
public:
    string id;

    void pID( ) const {
        std::cout << id << endl;
    }

};

// Array Grouping
class ArrayGrouper {
public:
    vector<string> bufferlogs{ };

    void nlog( const vector<string> &c ) {
        cout << "Commiting " << c . size( ) << " Types to Buffers." << endl;
        for ( const auto &i : c ) {
            bufferlogs . push_back( i );
        }
    };
};

// Buffer Stream C++.
class Buff {
public:
    string cbufstream{ };
    char *cbuffer = const_cast<char *>(cbufstream . c_str( ));
    char _xf{ };
    char UX{ };
    char all{ static_cast<char>(_xf + UX) };

    void buffer( char v ) {
        switch ( _xf ) {
            /*
             * Algorithm For C++ Bufferstream
             */
            case 'a':
                _xf ++;
            case 'A':
                UX ++;
            default:
                all ++;
        }
    }
};
namespace renderers {
    class AL_GPFastRender {
    public:
        string TM{ "ALG FastRender." };

        static void Init( ) {
            cout << "Using ALG FR." << endl;
            cout << "FastRender Provides Many C++ Buffer Streams For Easy Manipulation." << endl;
        }

        static void GetRendererState( const string &state ) {
            if ( state == "idle" ) {
                cout << "ALGP Is Not Rendering Any Objects Currently" << endl;
            } else if ( state == "lch" || state == "launch" ) {
                cout << "You are in the Launcher." << endl;
            } else {
                cout << __LINE__
                     << "@GetRendererState, Render State Must Contain A Value.\n(This Error Occurs When Incorrect Render States Are Set Or None at all.)"
                     << endl;
            }
        }
    };
}
class IOAlgorithm {
public:
    /*
     * Default IO Pointer.
     */
    string default_ptr{ };

    string dte;

    string dyn_io_return_arg{ };

    string aft{ };

    string exception{ };
    vector<string> Arguments{ };

    static bool ChipBufferStream( ) {
        std::cin . ignore( 256, '\n' );
        return true;
    }

    bool InitiateIOWithDP( ) {
        cout << default_ptr;
        cin >> dte;
        return true;
    };

    bool InitiateIoWithoutDP( ) {
        cin >> dte;
        return true;
    }

    bool StatementR( ) {
        cout << default_ptr;
        cin >> dte;
        if ( dte == dyn_io_return_arg ) {
            cout << aft << endl;
            return true;
        } else {
            cout << exception << endl;
            return false;
        }
    }

};

class CLGL {
public:
    string renderer{ };

    /*
     * CLGL Renderer
     */
    void use( ) const {
        if ( renderer == "algp" ) {
            renderers::AL_GPFastRender::Init( );
        }
    }
};

class VirtualWorldOperator {
public:
    void executeConsoleCommand( const string &command ) {
        system( command . c_str( ));
    }

    string worldname{ };
    string worldauthor{ };
    int worldsizex{ };
    int worldsizey{ };
    int worldsizez{ };

    bool worldStats( ) const {
        cout << "World Name: " << worldname << "." << endl;
        cout << "World Author: " << worldauthor << "." << endl;
        cout << "Other Stats VV\nWorld Y Angle: " << worldsizey << ".\nWorld X Angle: " << worldsizex
             << ".\nWorld Size Z: " << worldsizez << "." << endl;
        return true;
    }
};

class Windex {
public:
    static string ReturnWindowsUser( ) {
        char username[UNLEN + 1];
        DWORD username_len = UNLEN + 1;
        GetUserName( username, &username_len );
        cout << username << endl;
        return username;
    }

    static string ReturnWindowsLaptop( ) {
        long unsigned int bufsize = 100;
        char buf[100];
        GetUserNameA( buf, &bufsize );
        cout << buf;
        return buf;
    }

    static int ReturnUserCPU( bool core ) {
        if ( core ) {
            SYSTEM_INFO sysinfo;
            GetSystemInfo( &sysinfo );
            int numCPU = sysinfo . dwNumberOfProcessors;
            cout << numCPU;
            return numCPU;
        } else {
            SYSTEM_INFO sysinfo;
            GetSystemInfo( &sysinfo );
            string typeCPU = reinterpret_cast<const char *>(sysinfo . dwProcessorType);
            cout << "Successfully Got CPU Type, " << typeCPU;
            return 1;
        }
    }

    static int ReturnProcessorLevel( ) {
        SYSTEM_INFO sysinfo;
        GetSystemInfo( &sysinfo );
        int numCPU = sysinfo . wProcessorLevel;
        cout << numCPU;
        return numCPU;
    }

    static string ReturnFilePathInWindow( ) {
        char filename[] = "test.txt";
        char fullFilename[MAX_PATH];
        GetFullPathName( filename, MAX_PATH, fullFilename, nullptr );
        MessageBox( nullptr, fullFilename, "Confirmation Windows", MB_OK );
        return filename;
    }

};

class BufferStream {
public:
    int TryGetBufferAmount( );
};

int BufferStream::TryGetBufferAmount( ) {
    size_t BASIC_BUFFER_STD{ 1000 };

    return BASIC_BUFFER_STD;
}

class Acc_Create {
public:
    int age;
    string dob;
    string name;

    bool ParseAllToJS( string f ) const {
        ofstream ifiel( f );
        ifiel << "{\n"
                 "  \"User.UserName\": [\n"
                 "    \"" << name << "\"\n"
                                     "  ],\n"
                                     "  \"User.Age\": [\n"
                                     "    " << age << "\n"
                                                      "  ],\n"
                                                      "  \"User.DateOfBirth\": [\n"
                                                      "    \"" << dob << "\"\n"
                                                                         "  ]\n"
                                                                         "}";
        ifiel . close( );
        return true;
    }
};

class Table {
public:
    vector<string> Components{ };

    void components( ) {
        for ( auto &Component : Components ) {
            cout << Component << endl;
        }
    }

    void commit( const string &_g ) {
        Components . push_back( _g );
    }

    void commitMultiple( const vector<string> &G ) {
        for ( const auto &i : G ) {
            Components . push_back( i );
        }
    }
};

class DataStream {
public:
    string len{ };

    string idefault{ };

    string ndefault;

    int age{ };

    string yaml_standard{ };

    string build{ };

    void storetofile( ) const {
        ofstream ifile( len );
        ifile << "{\n"
                 "  \"Field1\": [\n"
                 "    \"" << ndefault << "\"\n"
                                         "  ],\n"
                                         "  \"Field2\": [\n"
                                         "    " << age << "\n"
                                                          "  ],\n"
                                                          "  \"RequiredField3\": [\n"
                                                          "    \"" << idefault << "\"\n"
                                                                                  "  ]\n"
                                                                                  "}";
        ifile . close( );
    }

    void raw_storetofile( const string &fname, const string &name, const int &dob, const int &int_age ) {
        ofstream ifile( fname );
        ifile << "{\n"
                 "  \"User.UserName\": [\n"
                 "    \"" << name << "\"\n"
                                     "  ],\n"
                                     "  \"User.Age\": [\n"
                                     "    " << int_age << "\n"
                                                          "  ],\n"
                                                          "  \"User.DateOfBirth\": [\n"
                                                          "    \"" << dob << "\"\n"
                                                                             "  ]\n"
                                                                             "}";
        ifile . close( );

    }

    void StoreYML( ) const {
        ofstream ifile( yaml_standard );
        ifile << "build: " << build << "\nauthor: " << ndefault
              << "\ndescription: This File Was Generated By The Object Engine." << endl;
        ifile . close( );
    }
};

class CodeBase {
public:
    vector<string> defaults{ "demo" };

    vector<string> heldonce{ };

    void PrintAtPosition( const vector<string> v, const int pos ) {
        cout << v[ pos ];
    }

    void get_sizeof( const string &thi ) {
        cout << thi . size( );
    }
};

void anl_pf( const string &v ) {
    cout << v << endl;
}

class KeyHooker {
public:
    string keyVName{ };

    char KeyVocab = _getch( );
    string key_ptr = keyVName;

    int key = _getch( );

    vector<int> KeysByKeyCodes{ };

    // Push Back KeyBoard KeyCode
    void AddKey( int keyf ) {
        KeysByKeyCodes . push_back( keyf );
    }

    // Keyboard Input With Loose/Static Default Expression
    void GetKeyBoardInputByKBKC( int pos, const string &default_, const string &v ) {
        while ( key ) {
            for ( int i = 0; i < pos; i ++ ) {
                if ( key == KeysByKeyCodes[ pos ] ) {
                    cout << v << endl;
                } else {
                    cout << default_ << endl;
                }

            }

        }
    }

    bool GetLooseKey( int KC ) const {
        if ( key == KC ) {
            return true;
        } else {
            return false;
        }
    }

    bool GetVocabularyKey( char T ) const {
        if ( KeyVocab == T ) {
            return true;
        } else {
            return false;
        }
    }
};

class IoFixModule {
public:
    string f;

    bool Get( string H, string val ) {
        cin >> H;
        if ( H == val ) {
            return true;
        } else {
            return false;
        }
    }

    bool GetVar( string v, string em ) {
        cin >> v;
        if ( v == em ) {
            return true;
        } else {
            return false;
        }
    }
};

class Module {
public:
    string name;
    string date_made;
    string author;
    string dependencies;
    string extras;
    string onrun;
    string test;


    void publish( ) {
        // INSERT VAR CHECK
        if ( name . empty( )) {
            cout << Windex::ReturnWindowsUser( ) << "@" << Windex::ReturnFilePathInWindow( );
        }
    }
};

class Solid {
public:
    double frequency{ };
    int x{ };
    int y{ };
    int z{ };
};

class Mutator {
public:
    void mutate( int num ) {
        num ++;
        cout << "Mutated Num To " << num << endl;
    }
};

class PlayerController {
protected:
    string id{ };
    int max_keeping{ };
    string object_name{ };
public:
    explicit PlayerController( string na, string pcn ) {
        id = std::move( na );
        object_name = std::move( pcn );
    }

    explicit PlayerController( const string &initstream ) {
        cout << "Initialized PlayerController As " << initstream << "." << endl;
    }
};

class animc {
public:
    bool move( int frames, const string &objectname, const string &alias ) {
        for ( int i = 0; i < frames; i ++ ) {
            cout << objectname << " Moved " << i << " Frame Without Error.\n\n";
            Sleep( 548 );
        }
        return true;
    }

    bool move( long double frames, const string &objectname, const string &alias ) {
        for ( int i = 0; i < frames; i ++ ) {
            cout << objectname << " Moved " << i << " Frame Without Error.\n\n";
            Sleep( 548 );
        }
        return true;
    }

    bool move( double frames, const string &objectname, const string &alias ) {
        for ( int i = 0; i < frames; i ++ ) {
            cout << objectname << " Moved " << i << " Frame Without Error.\n\n";
            Sleep( 548 );
        }
        return true;
    }
};

class UserStreamOperator {
public:
    string name{ };
    int age{ };

    void write( string thisc ) {
        cout << "<" << name << "> " << thisc << " (" << __DATE__ << ")" << endl;
    }
};

class Random {
public:

    int MAXREP = 100;
    int DefualtMax = 10;
    int rofdefaultmax = rand( ) % DefualtMax;

    void RandResponse( vector<string> l ) {
        for ( int i = 0; i < l . size( ); i ++ ) {
            srand( time( nullptr ));

            cout << l[ rofdefaultmax ] << endl;
        }
    }
};

class Sleepy {
public:
    bool wait( int seconds ) {
        int final = seconds * 1000;
        Sleep( final );
        return true;
    }
};

class KinematicBody {
public:

    int BodyParts{ };
    int Rig{ };
    bool IsNew{ };
    string RigID{ };

    void CreateNewKinematicBasedOnArgSet( ) {
        anl_pf( "Creating A New Kinematic Body With The Rig Type Of " + to_string( Rig ) + ", With " +
                to_string( BodyParts ) + " Amount of Parts." );
        Sleep( 1000 );
        anl_pf( "Created New Kinematic Body With Args Set." );
    }

};

class InOutManip {
protected:
    int User_age{ };
    string default_ptr{ };
    string get_ptr{ };
public:
    bool Test( const string &TS /* Usually strings Got With cin >> */) {
        if ( TS == get_ptr ) {
            return true;
        } else {
            return false;
        }
    }

};

class AClient {
public:
    int limit{ };
    string clientname{ };
    unsigned long long id{ };

};

class Animation {
public:
    string fileto{ };
    int lines{ };

    bool loadfile_raw( const string &file ) {
        ifstream ifile( file );
        if ( ! ifile ) {
            return false;
        } else {
            string commands;
            while ( ifile >> commands ) {
                if ( commands == "!move" ) {
                    int frames;
                    cin >> frames;
                    for ( int i = 0; i < frames; i ++ ) {
                        anl_pf( "Successfully Moved " + to_string( i ) + " Line(s)" );
                        Sleep( 400 );
                    }
                } else if ( commands == "#read" ) {
                    string action;
                    if ( action == "once" ) {
                        return true;
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
                return true;
            }
            return true;
        }

    }

    bool LoadFromParams( ) {
        ifstream ifile( fileto );
        if ( ! ifile ) {
            return false;
        } else {
            string commands;
            while ( ifile >> commands ) {
                if ( commands == "!move" ) {
                    int frames;
                    cin >> frames;
                    for ( int i = 0; i < frames; i ++ ) {
                        anl_pf( "Successfully Moved " + to_string( i ) + " Line(s)" );
                        Sleep( 400 );
                    }
                } else if ( commands == "#read" ) {
                    string action;
                    if ( action == "once" ) {
                        return true;
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
                return true;
            }
            return true;
        }

    }
};

class CMATH_IN {
public:
    const long double pi = 3.14159265;

    long double return_pi( ) {
        return pi;
    }

    const long double st_arithmetic = 31.3234102;

    long double return_sta( ) {
        return st_arithmetic;
    }

    long double alter( string var ) {
        double rs = 1.2;
        long double FSR = st_arithmetic * var . size( ) + rs;

        return FSR;
    }

    bool IsFar( long double value, long double value2 ) {
        double length = value - value2;

        if ( length >= 10.0 ) {
            return true;
        } else if ( length <= 20.3 ) {
            return false;
        } else {
            return true;
        }

    }
};

class network {
protected:
    string basic_user{ };
    string rlname{ };
    int ages{ };
    double balance{ };
public:
    string alias{ };
    vector<string> names{ };
    vector<double> balances{ };
    vector<int> agek{ };

    void log( string activity ) {
        CreateDirectory( "logs", nullptr );
        ofstream isfile( "logs\\log.txt", fstream::app );
        isfile << activity << "@" << __TIME__ << endl;
        isfile . close( );
    }
};

class checkstream {
public:
    string a1;
    string a2;

    bool check( string s, string g ) {
        if ( s == g ) {
            return true;
        } else {
            return false;
        }
    }
};

class light {
public:
    double frequency{ };

    long double brightness{ };

    string light_name{ };

    long int light_id{ };

    bool create( ) {
        return true;
    }

    bool On( ) {
        return true;
    }

    bool Off( ) {
        return false;
    }
};

class LocalPlayer {
public:
    int health = 100;
    string Body1 = "BodyPart1";
    string Body2 = "BodyPart2";

    string GetFirstChild( string data ) {
        if ( data == "PlayerHealth" ) {
            return to_string( health );
        } else if ( data == "LooseBody1" ) {
            return Body1;
        } else if ( data == "LooseBody2" ) {
            return Body2;
        } else {
            cout << "LINE " << __LINE__ << "@GetFirstChild : Data Must Contain A Value Of Player_Model." << endl;
            string err = "nil";
            return err;
        }
    }
};

class Service {
public:
    string type{ };
    string date_made{ };
    string dependencies{ };
    string license{ };
    string Description{ };

    void Label( ) {
        cout << "New Server Service: " << type << "\nLicense: " << license << "\nDate Created: " << date_made
             << "\nDependencies: " << dependencies << ".";
    }
};

/*
 *
 */
class ExclamationCodeBase {
    int Parse( string file ) {
        vector<string> Lists{ };

        vector<int> val_int{ };
        using namespace std;
// Default Compiler Sights
        string function;
/**
 * @brief Comment Getlines
 */
        char OUTCOMMENT[9000];
        string param; // Parameter
        string delimiter; // Delims (as, for, when, not, is, in)
// Include PATH For custom_preinclude
        string INCLUDEPATH;
// WTP (what to print)
        char wtp[300];
// Pre-Installed Libraries
        string module;
        string operators;
        string operandss;
        string link;
// Insert Different Var Types
        bool AnyBool;
/*
 * Make Lists
 */
        char ListORarray[500];
// PlaceHolder
        string placement;
// Tags
        string tag;
// IO Alias
        string ioalias = "io";
// Define Integer Parameter
        int dummy;
// Types
        string typ;
// Include Handlers
        string export_;
        string initializer;
        string value_f;
        string import_type;
        vector<string> input_variables{ };

        vector<bool> Booleans{ };
/*
 * Define Debug Modes
 */
        vector<string> Modes{ "The Mode, Debug, Debugs the Current file\n", // NOLINT(cert-err58-cpp)
                              "[NewLine_edit] NewLine Edit Forces User To Write NewLine at the End of file\n",
                              "[ScriptEdit] -- Funnier Script Editing.\n"
        };


        vector<string> functionexports{ };

        vector<string> sessionparams{ };

        vector<string> plates{ };

        vector<string> aliases{ };

        vector<string> pre_include_user{ };

        vector<string> buildIdeas{ };

        ifstream ifile;
        ifile . open( file, fstream::binary );
        if ( ifile ) {
            while ( ifile
                    >> function ) {
                if ( function == "gstring" ) {
                    ifile
                            >> param;
                    printf( "Created Gstring with %s as name\n", param . c_str( ));
                    sessionparams . push_back( param );
                } else if ( function == "!print_raw" ) {
                    ifile . getline( wtp, 300 );
                    printf( "%s", wtp );
                } else if ( function == "!print_all" ) {
                    for (
                        auto &sessionparam : sessionparams
                            ) {
                        cout
                                << sessionparam
                                << endl;
                    }
                } else if ( function == "!print" ) {
                    ifile . getline( wtp, 300 );
                    printf( "%s\n", wtp );
                } else if ( function == "!pre_include" ) {
                    ifile
                            >> module;
                    if ( module == "umbrella" ) {
                        CreateDirectory( _T( "cbatch_packages" ), nullptr );
                        ofstream lists( "cbatch_packages\\make.txt" );
                        lists << "[n] Umbrella" << endl;
                        lists . close( );
                        system( "git clone https://github.com/Kai-Builder/umbrella" );
                    } else if ( module == "rcp" ) {
                        system( R"("Lib\RCP_dev-1.0.6\RCP\RCP1.0.4.exe")" );
                    } else if ( module == "exportHandler" ) {
                        cout << "Primary Source: ExportHandler.\nGS: ESHandler\nLint/Debug: Excla_Lint_redux" << endl;
                    } else {
                        printf( "Found unknown Module, '%s'", module . c_str( ));
                    }
                } else if ( function == "$allocate" ) {
                    ifile
                            >> dummy;

                } else if ( function == "!new" ) {
                    ifile
                            >> param;
                    sessionparams . push_back( param );
                } else if ( function == "!plate" ) {
                    ifile
                            >> tag;
                    plates . push_back( tag );
                } else if ( function == "call" ) {
                    ifile
                            >> placement;
                    ifile
                            >> dummy; // Position
                    if ( placement == "session" ) {
                        cout
                                << sessionparams[ dummy ];
                    } else if ( placement == "plates" ) {
                        cout
                                << plates[ dummy ];
                    } else if ( placement == "aliases" ) {
                        cout
                                << aliases[ dummy ];
                    } else if ( placement == "io.variables" ) {
                        cout
                                << input_variables[ dummy ];
                    } else if ( placement == "integers" ) {
                        cout
                                << val_int[ dummy ];
                    } else if ( placement == "modelists@" ) {
                        cout
                                << Modes[ dummy ];
                    } else if ( placement == "%lists%" ) {
                        cout
                                << Lists[ dummy ];
                    }
                } else if ( function == "remember" ) {
                    ifile
                            >> dummy;
                    ifile
                            >> delimiter;
                    ifile
                            >> param;
                    aliases . push_back( param );
                    val_int . push_back( dummy );
                } else if ( function == "io" ) {
                    ifile
                            >> tag;
                    ifile
                            >> param;
                    ifile
                            >> dummy;
                    if ( tag == "print" ) {
                        cout
                                << param
                                << endl;
                    } else if ( tag == "warn" ) {
                        cout
                                << "Try to avoid using"
                                << param
                                << endl;
                    } else if ( tag == "re_size" ) {
                        val_int . push_back( dummy );
                    } else if ( tag == "alias?" ) {
                        ioalias = param;
                    }
                } else if ( function == "//" ) {
                    ifile . getline( OUTCOMMENT, 9000 );
                } else if ( function == "$stdin.get" ) {
                    ifile
                            >> delimiter;
                    ifile
                            >> tag;
                    cin
                            >> param;
                    input_variables . push_back( tag );
                } else if ( function == "for" ) {
                    ifile
                            >> param;
                    ifile
                            >> delimiter;
                    ifile
                            >> tag;
                    ifile
                            >> operators;
                    if ( param == "word" ) {
                        for (
                            char i : tag
                                ) {
                            cout
                                    << i;
                        }
                    }
                } else if ( function == "rise" ) {
                    ifile
                            >> param;
                    if ( param == "FunctionExceptionError" ) {
                        cout
                                << "Error, Function Was Not Found, Aborting Process"
                                << endl;
                        abort( );
                    }
                } else if ( function == "!define" ) {
                    ifile
                            >> param;
                    sessionparams . push_back( param );
                    if ( param == "VoidFinder" ) {
                        cout
                                << "Initialized VoidFinder"
                                << endl;
                    }
                } else if ( function == "!.INCLUDE" ) {
                    ifile
                            >> param;
                    ifstream lol( param );
                    lol
                            >> initializer;
                    if ( initializer == "exclamationExport" ) {
                        cout
                                << "Importing "
                                << param
                                << " To "
                                << file
                                << endl;
                        lol
                                >> export_;
                        lol
                                >> import_type;
                        lol
                                >> tag;
                        if ( export_ == "!export" ) {
                            if ( import_type == "sessionvariable" ) {
                                sessionparams . push_back( tag );
                            } else if ( import_type == "exportStorage" ) {
                                functionexports . push_back( tag );
                            }
                        }
                    } else {
                        cout
                                << "Incorrect Initializer."
                                << endl;
                    }
                    if ( ! lol ) {
                        cout
                                << "File Not Found"
                                << endl;
                    }
                } else if ( function == "pre_include<int>" ) { // pre_include<template> (pre) <alias> as <value>
                    ifile >> param;
                    ifile >> INCLUDEPATH;
                    ifile >> delimiter;
                    ifile >> dummy;
                    sessionparams . push_back( param );
                    pre_include_user . push_back( INCLUDEPATH );

                } else if ( function == "!custom_preinclude" ) {
                    ifile >> dummy;
                    CreateDirectory( _T( "exclaMation_cache" ), nullptr );
                    cout << "Getting " << pre_include_user[ dummy ] << " At Position " << dummy << endl;
                } else if ( function == "++" ) {
                    ifile >> dummy;
                    dummy ++;
                } else if ( function == "!GlobalInterpretation" ) {
                    cin . getline( ListORarray, 400 );
                    Lists . emplace_back( ListORarray );
                } else if ( function == "using" ) { // Using (list;array) <name>
                    ifile >> param;
                    ifile >> tag;
                    ifstream ifil;
                    ifil . open( tag );
                    if ( param == "list" ) {
                        ifil . getline( ListORarray, 900 );
                        cout << "Found " << ListORarray << " In " << tag << "." << endl;
                        Lists . push_back( ListORarray );
                    }
                } else if ( function == "*flists" ) {
                    cout << __LINE__ << endl;
                    cout << __DATE__ << endl;
                    cout << file << endl;
                    cout << __TIME__ << endl;
                } else if ( function == "demomode" ) {
                    cout << "Demomode is not in The ModeLists. Say !modelist For all available." << endl;
                } else if ( function == "!modelist" ) {
                    for (
                        auto &Mode : Modes
                            ) {
                        cout << Mode << endl;
                    }
                } else if ( function == "!set" ) {
                    ifile >> param;
                    ifile >> tag;
                    if ( param == "build" ) {
                        const string &build = tag;
                        buildIdeas . push_back( build );
                    } else if ( param == "_current" ) {
                        string uscript = "currentscript";
                        sessionparams . push_back( uscript );
                    }
                } else if ( function == "newline" ) {
                    cout << "\n\n" << endl;
                } else if ( function == "!port" ) {
                    ifile >> param;
                    ifile >> tag;
                    cout << "Ported " << tag << " To " << param << " With No Errors.";
                } else if ( function == "!exportable" ) {
                    ifile >> param;
                    sessionparams . push_back( param );
                    ofstream mfile( ".exports", fstream::app );
                    mfile << param << endl;
                    mfile . close( );
                } else if ( function == "!ifndef" ) {
                    ifile >> param;
                    sessionparams . push_back( param );
                    bool def = true;
                    Booleans . push_back( def );
                } else if ( function == "!endif" ) {
                    ifile >> param;
                    ifile >> dummy;
                    cout << "Ended process " << param << " With exit fcode " << dummy << endl;
                } else if ( function == "!endl" ) {
                    cout << "Finished Compiling !ifndef statement." << endl;
                } else if ( function == "!overflow" ) { // !overflow X <string> <int>
                    ifile >> param;
                    ifile >> tag;
                    ifile >> dummy;
                } else if ( function == "LIST=(" ) { // LIST=( MyStrings! )
                    getline( cin, param );
                    ifile >> tag;
                } else if ( function == "end" || function == "end)" ) {
                    cout << "end" << endl;
                } else if ( function == "EXTENSTR" ) {
                    ifile >> param;
                    ifile . getline( wtp, 300 );
                    sessionparams . push_back( param );
                    functionexports . emplace_back( wtp );
                } else if ( function == "return" ) {
                    ifile >> dummy;
                    return dummy;
                } else if ( function == "umbrella" ) {
                    ifile >> param;
                    if ( param == "init" ) {
                        try {
                            system( R"("umbrella\Umbrella.py")" );
                        }
                        catch ( int a ) {
                            cout << "Umbrella Files not found. Initializing Failed." << endl;
                        }
                    }
                } else if ( function == "program.sleep" ) {
                    ifile >> dummy;
                    Sleep( dummy );
                } else if ( function == "if" ) { // if <param> is <value> then (keyword) or if param is value print foo
                    ifile >> param;
                    ifile >> delimiter;
                    ifile >> tag;
                    ifile >> delimiter;
                    ifile >> initializer;
                    if ( initializer == "print" ) {
                        cin . getline( wtp, 500 );
                    } else if ( initializer == "quit" ) {
                        abort( );
                    }
                } else { // Declaration: <unknown> = <val>
                    ifile >> param;
                    ifile >> tag;
                    if ( param == "=" ) {
                        sessionparams . push_back( tag );
                    }
                }
            }
        } else {
            return 3;
        }
    }
};
#undef OBJECTS
#endif