{.$DEFINE USE_DEBUGMODE}   // �Ƿ�ʹ�õ���ģʽ

{$IFDEF USE_DEBUGMODE}
  {$DEFINE DebugApp}       // ���õ���״̬
{$ENDIF}

{.$DEFINE OuputFileLog}    //�Ƿ������־�ļ�
{$DEFINE OuputRemoteLog}  //�Ƿ����Զ����־��Ϣ

{$IFDEF DebugApp}
  {$DEFINE WRITEDEBUG}        //�Ƿ��������д������������Ϣ
  {$DEFINE OutputDebug}       //�Ƿ�����Ϣ�������������Ϣ
{$ENDIF}

{$DEFINE UseUDP}  // �Ƿ�ʹ��Զ�������־