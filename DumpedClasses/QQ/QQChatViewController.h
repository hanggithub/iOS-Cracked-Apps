//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseChatViewController.h"

#import "ArkBannerTipsDelegate.h"
#import "DBAsyncCallbackProtocol.h"
#import "GetTroopMemberProtocol.h"
#import "GetTroopRemarkProtocol.h"
#import "QQBabyQKeyWordViewDelegate.h"
#import "QQGrayTipsManagerDelegate.h"
#import "QQPttRecorderDelegate.h"
#import "QshipAnimationViewDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class ArkBannerTipView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, QC2CRoamMessageService, QQBabyQKeyWordView, QQCircleWaveNotifyView, QQEncounterChatSettingController, QQMessageModel, QQNetWorkTipsView, QQPublicAccountLoadingView, QQRichMsgPreviewDialog, QQViewController, QshipAnimationView, UIActionSheet, UIActivityIndicatorView, UIButton, UILabel, UIProgressView, UIView;

@interface QQChatViewController : QQBaseChatViewController <RichMsgPreviewDialogDelegate, QQPttRecorderDelegate, DBAsyncCallbackProtocol, QQGrayTipsManagerDelegate, UIActionSheetDelegate, ArkBannerTipsDelegate, QQBabyQKeyWordViewDelegate, QshipAnimationViewDelegate, UIAlertViewDelegate, GetTroopMemberProtocol, GetTroopRemarkProtocol>
{
    UIButton *_historyButton;
    UIButton *_voiceModal;
    UIButton *_cardButton;
    NSTimer *timer;
    NSTimer *processTimer;
    UIProgressView *progress;
    UIActivityIndicatorView *act;
    NSDictionary *Imagedict;
    NSMutableDictionary *identDic;
    _Bool ifint;
    _Bool KeyBoard;
    int _displayMsgCount;
    _Bool _flagMsgBarInfoGroup;
    int _flagMsgTmp;
    NSString *_flagMsgBarValueUin;
    _Bool _isReqVideActionSheetShow;
    _Bool _supportInterfaceRote;
    UIActionSheet *sheetVideo;
    QQMessageModel *recordModel;
    _Bool bGerenalCell;
    _Bool _isMyFriend;
    id _moviePlayer;
    _Bool _isVoiceText;
    int _sendPTTSetp;
    _Bool _rotateViewForInterfaceOrientation;
    int _currSkin;
    NSTimer *_notificationRecivePttTimer;
    QQNetWorkTipsView *_netWorkTips;
    _Bool ifShowTips;
    _Bool _isFormNSMagBar;
    QQRichMsgPreviewDialog *_richMsgPreviewDialog;
    NSMutableDictionary *_shareParam;
    NSMutableArray *_arrOnlineFile;
    UIButton *_onlineFileTip;
    UILabel *_onlineFileTipText;
    QC2CRoamMessageService *_service;
    NSString *_toSendFilePath;
    QQEncounterChatSettingController *_settings;
    _Bool _handleTeleTip;
    _Bool _flagGetAIOFeed;
    _Bool _isNeedToShowPttPannel;
    _Bool _isNeedToShowKeyBoard;
    _Bool _onewayFriendTipsHandled;
    NSMutableArray *atGroupMemArr;
    NSMutableArray *atGroupMemDataArr;
    _Bool _isToForwardMsg;
    _Bool _isTipsShow;
    int _showType;
    int _curMemCount;
    double _enterTime;
    QQCircleWaveNotifyView *_babyQNotifyView;
    QQBabyQKeyWordView *_babyQKeyWordView;
    int _robotSubMsgClassID;
    ArkBannerTipView *_arkBarTipView;
    _Bool isLoadingData;
    _Bool _antiFraudChecked;
    NSString *_phone;
    _Bool isReportFromOF;
    UIView *_loadingView;
    UIActivityIndicatorView *_indicatorView;
    _Bool _isBlockGroupCanLoadMsg;
    _Bool _updateFromDiscuss;
    int currentPage;
    UIView *_sliderView;
    QQPublicAccountLoadingView *publicLoadingView;
    long long _newestFeedRequestID;
    QQMessageModel *_quoteMsgModel;
    long long _showBabyQNotifyType;
    QshipAnimationView *_shipAnimationView;
    unsigned long long _giftWantedUin;
    QQViewController *_campusCircleWebVC;
}

@property(nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) QQViewController *campusCircleWebVC; // @synthesize campusCircleWebVC=_campusCircleWebVC;
@property(nonatomic) unsigned long long giftWantedUin; // @synthesize giftWantedUin=_giftWantedUin;
@property(retain, nonatomic) QshipAnimationView *shipAnimationView; // @synthesize shipAnimationView=_shipAnimationView;
@property(nonatomic) long long showBabyQNotifyType; // @synthesize showBabyQNotifyType=_showBabyQNotifyType;
@property(retain, nonatomic) QQMessageModel *quoteMsgModel; // @synthesize quoteMsgModel=_quoteMsgModel;
@property(nonatomic) _Bool updateFromDiscuss; // @synthesize updateFromDiscuss=_updateFromDiscuss;
@property(nonatomic) _Bool isBlockGroupCanLoadMsg; // @synthesize isBlockGroupCanLoadMsg=_isBlockGroupCanLoadMsg;
@property(nonatomic) long long newestFeedRequestID; // @synthesize newestFeedRequestID=_newestFeedRequestID;
@property(retain, nonatomic) QQPublicAccountLoadingView *publicLoadingView; // @synthesize publicLoadingView;
@property _Bool isNeedToShowKeyBoard; // @synthesize isNeedToShowKeyBoard=_isNeedToShowKeyBoard;
@property _Bool isNeedToShowPttPannel; // @synthesize isNeedToShowPttPannel=_isNeedToShowPttPannel;
@property(nonatomic) int sendPTTSetp; // @synthesize sendPTTSetp=_sendPTTSetp;
@property int currentPage; // @synthesize currentPage;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property _Bool isVoiceText; // @synthesize isVoiceText=_isVoiceText;
@property(retain, nonatomic) QQMessageModel *recordModel; // @synthesize recordModel;
@property(nonatomic) NSString *flagMsgBarValueUin; // @synthesize flagMsgBarValueUin=_flagMsgBarValueUin;
@property _Bool ifint; // @synthesize ifint;
@property _Bool KeyBoard; // @synthesize KeyBoard;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer;
- (_Bool)shouldShowAudioFromConern;
- (void)checkPushGrayTipsOnTheEveOfDegrade;
- (void)QShipAnimationViewDidDisappear;
- (void)QShipAnimationViewWillDisappear;
- (void)QShipAnimationViewShowing;
- (void)checkShipAnimation;
- (void)dismissInputPanelView:(_Bool)arg1;
- (void)actionInputbarPhoto:(id)arg1;
- (void)actionInputbarPTT:(id)arg1;
- (void)actionInputbarPTV:(id)arg1;
- (void)sendReadConfirmForBabyQGuideMessage:(id)arg1;
- (void)handleRecommendedFriendDidTap:(id)arg1;
- (void)loadPersonalTag;
- (_Bool)shouldLoadNewPersonalTag;
- (void)loadLocalGameTeamBuleTips;
- (void)handGameTeamBuleTips;
- (void)didEndDisplayingCell:(id)arg1 atIndexPath:(id)arg2;
- (void)willDisplayCell:(id)arg1 atIndexPath:(id)arg2;
- (void)actionInputbarPokeSingle:(id)arg1;
- (void)actionInputbarPoke:(id)arg1;
- (void)setDidShowRedPointForInputbarItem:(id)arg1;
- (_Bool)shouldShowRedPointForInputbarItem:(id)arg1;
- (void)baseChatMessage:(id)arg1 didLoadUnreadMessages:(id)arg2 first:(_Bool)arg3;
- (void)actionVideo;
- (id)getAtGroupMemArr;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)showRebateButton:(id)arg1;
- (id)keyForSelectedInputbarItemCaching;
- (void)setupInputbarItems;
- (void)startGoldMsgAnimationWithMsg:(id)arg1;
- (void)showGolgMsgAnimationIfNeeded:(id)arg1;
- (void)initializeTextInputCache;
- (void)updateCRMMenuAndRedrawMenu;
- (void)onCRMMenuCfgUpdateCompleted:(id)arg1;
- (id)trimAtGroupName:(id)arg1;
- (id)filterAtChar:(id)arg1;
- (void)onAIOTipsNotify:(id)arg1;
- (void)HandleP2PAVTips;
- (void)appendMessage:(id)arg1 shouldReloadData:(_Bool)arg2 shouldScrollToEndWithAnimation:(_Bool)arg3;
- (void)didSelectSystemNotificationCell:(id)arg1;
- (void)friendShieldNotificationDidReceive:(id)arg1;
- (void)showGroupAssistantChatTip;
- (void)bannerTipViewDidClick:(id)arg1;
- (void)bannerButtonDidClick:(id)arg1 atIndex:(long long)arg2;
- (void)antiFraudTipsWillAppear:(id)arg1;
- (void)didClickMenu:(id)arg1 withParam:(id)arg2;
- (void)QQPPPopBtnClick:(id)arg1 param:(id)arg2;
- (void)createLoadingView;
- (void)hidePublicLoadingView;
- (void)stopPublicAccountLoadingView;
- (void)startPublicAccountLoadingView;
- (void)QQPPBarBtnClick:(id)arg1 param:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onVideoRecordCompleted:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)actionAudioFromRightButtn;
- (void)ActionSelectVideoFromAlbum;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reSendTextMsg:(id)arg1 isLocation:(_Bool)arg2;
- (_Bool)sendData:(id)arg1 showText:(id)arg2 emojiStickerInfo:(id)arg3;
- (_Bool)sendData:(id)arg1 showText:(id)arg2;
- (_Bool)sendLocationMsg:(id)arg1 showText:(id)arg2;
- (_Bool)sendTextMsg:(id)arg1 showText:(id)arg2 emojiStickerInfo:(id)arg3;
- (_Bool)sendTextMsg:(id)arg1 showText:(id)arg2;
- (void)refreshAIOByAppendingMessages:(id)arg1;
- (void)initArkAppMsgModel:(id)arg1;
- (_Bool)doSendTextMsg:(id)arg1 showText:(id)arg2 isLocation:(_Bool)arg3;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)removeLoadingView;
- (void)addLoadingView;
- (void)didRecieveVASReminderPaySuccessNotification;
- (void)checkForVASReminder:(id)arg1;
- (void)PushUpdateDeleteFriend:(id)arg1;
- (void)actionReply:(id)arg1;
- (void)addQuoteMsAtInfo:(id)arg1;
- (_Bool)doSendTextMsg:(id)arg1 showText:(id)arg2 isLocation:(_Bool)arg3 resendModel:(id)arg4 hideFakeMsg:(_Bool)arg5 emojiStickerInfo:(id)arg6;
- (_Bool)doSendTextMsg:(id)arg1 showText:(id)arg2 isLocation:(_Bool)arg3 resendModel:(id)arg4 hideFakeMsg:(_Bool)arg5;
- (_Bool)doSendTextMsg:(id)arg1 showText:(id)arg2 isLocation:(_Bool)arg3 resendModel:(id)arg4;
- (void)setAnomymousInfoToMessage:(id)arg1 fromResendModel:(id)arg2;
- (void)sendSpriteActionMsg:(id)arg1 resendModel:(id)arg2;
- (void)sendSpriteActionMsg:(id)arg1;
- (void)sendMarketFaceMsg:(id)arg1 resendModel:(id)arg2;
- (void)sendMarketFaceMsg:(id)arg1;
- (void)sendMarketFaceMsgFromShare:(id)arg1;
- (void)perforDelayTitle;
- (void)pttReciveNow:(id)arg1;
- (void)viewWillDisappearOnNormalStatus;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)judgeGetFeedAIO;
- (void)setQZNewestFeedLoaded;
- (_Bool)alreadyReachTwoTimesToUin:(id)arg1;
- (void)addShowSpecialRemindAIOTipTimesToUin:(id)arg1;
- (id)queryShowTimeToUin:(id)arg1;
- (void)recordShowTimeToUin:(id)arg1;
- (void)showSpecialRemindAIOTipToUin:(id)arg1;
- (void)specialRemindAIOTip;
- (void)deferSpecialRemindAIOTip;
- (void)leavePreviewStatus;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)reSetLeftButtonTitle;
- (void)layoutCustomTitle;
- (void)willChangeInputbarStatus:(unsigned long long)arg1;
- (void)handleMsgUnreadCountClean;
- (void)viewWillAppearOnNormalStatus;
- (void)viewWillAppear:(_Bool)arg1;
- (void)popViewController;
- (void)tableViewSendMarioImage:(id)arg1;
- (void)tableViewReSendImage:(id)arg1;
- (void)sendHotPicGifImgUseForward:(id)arg1;
- (void)sendDouTuImg:(id)arg1;
- (void)sendInternalMarioImage:(id)arg1 path:(id)arg2 picMd5:(id)arg3 emojiInfo:(id)arg4;
- (void)SendGIFImage:(id)arg1 data:(id)arg2 bodyType:(int)arg3 picMd5:(id)arg4 attr:(id)arg5;
- (void)prepareForRobotMessage:(id)arg1;
- (void)didSelectReloadImage:(id)arg1;
- (void)dismissVocieTips;
- (void)handleRequestTimeout:(id)arg1;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)handleStartUpdateLocation:(id)arg1;
- (void)startUpdateLocation;
- (void)removeLbsNotification;
- (void)startBizQQLocationReport;
- (void)showBizQQReqLocAlert;
- (void)onResponseQidianTransferInfoNotification:(id)arg1;
- (void)onResponseQidianInfoNotification:(id)arg1;
- (void)viewDidLoad;
- (void)setupRichKeyboardItems;
- (void)loadView;
- (void)_removeTheBlockTipsView:(id)arg1;
- (void)showPopupMenu0;
- (void)restoreDataWithCertainMsg;
- (void)loadData;
- (void)restoreData;
- (void)handleC2CRoamMessage:(id)arg1 msgList:(id)arg2;
- (void)handleGroupMessage:(id)arg1 userInfo:(id)arg2:(id)arg3:(long long)arg4;
- (void)resetIfint:(_Bool)arg1;
- (void)checkOnlineState:(id)arg1;
- (void)requestUpdateNetWorkStatus:(long long)arg1;
- (void)reloadCustomTitle;
- (void)resetViewControllerTitle;
- (_Bool)Confirmation;
- (void)resetC2cMessageReadConfirm:(double)arg1;
- (void)sendReadConfirm;
- (void)sendAddAccpetedMsgReadConfirm;
- (_Bool)needClearTextMessageFlag;
- (int)viewTag;
- (void)quoteMsgStructViewClicked:(id)arg1;
- (void)dealloc;
- (void)uploadSilentCare;
- (void)viewDidLayoutSubviews;
- (id)initWithuin:(id)arg1 isGroup:(_Bool)arg2 accostType:(int)arg3;
- (id)initWithuin:(id)arg1 isGroup:(_Bool)arg2 initIndex:(int)arg3;
- (id)initWithuin:(id)arg1 isGroup:(_Bool)arg2;
- (id)initWithCertainMsg:(id)arg1;
- (void)appendAIONearFilePromoteTip;
- (void)_openChatSettingView;
- (void)setProgress:(id)arg1;
- (void)dismiss;
- (void)uploadFailed;
- (void)reSendMultiMsgForward:(id)arg1;
- (id)prepareUploadMultiMsgForwardToWX:(id)arg1;
- (id)prepareUploadMultiMsgForward:(id)arg1 isForward:(_Bool)arg2;
- (id)createMultiMsgForward:(id)arg1 isLargeMsg:(_Bool)arg2;
- (id)prepareUploadImageByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 content:(id)arg4;
- (id)prepareUploadImageByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3;
- (void)sendVideoFile:(id)arg1;
- (void)showKeyboardForVoice:(id)arg1;
- (void)showKeyboard:(id)arg1;
- (void)headIconTouch:(id)arg1;
- (void)reloadTableView:(id)arg1;
- (void)ActionSendMessgae;
- (void)timeOut;
- (void)ocsHandlerNotification:(id)arg1;
- (void)configNotifications;
- (void)invokePlugin:(CDUnknownBlockType)arg1 showFailedToast:(_Bool)arg2;
- (void)initCallbackGoldMsg;
- (void)deallocCallbackGoldMsg;
- (void)viewDidLayoutSubviewsGoldMsg;
- (void)viewDidAppearGoldMsg:(_Bool)arg1;
- (void)viewWillDisappearGoldMsg:(_Bool)arg1;
- (void)viewWillAppearGoldMsg:(_Bool)arg1;
- (_Bool)isGoldMsgMode;
- (void)handleActionGoldMsgMode:(id)arg1 richAIOFlag:(unsigned long long)arg2;
- (void)sendThirdAppShareMsg:(id)arg1 msg:(id)arg2;
- (void)cancelButtonClick;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)showThirdAppForwardNotify;
- (void)handleShareToFriendNotification:(id)arg1;
- (void)processJSCallBack:(id)arg1 withParamStr:(id)arg2;
- (id)getMaxSubString:(id)arg1 maxLength:(int)arg2;
- (void)unregisterShareToFriendNotifications;
- (void)registerShareToFriendNotifications;
- (void)handleNewWifiLinkTaped:(id)arg1;
- (void)insertVoiceCell;
- (void)reReceivePPT:(id)arg1 index:(id)arg2;
- (void)reSendStreamPTT:(id)arg1;
- (void)upAmrFile:(id)arg1;
- (void)showUnsetFailedTips;
- (void)updateTipsContent:(id)arg1;
- (id)tipsContentForState:(long long)arg1;
- (void)removeRecordItemWithUin:(id)arg1;
- (void)removeTipsMessage:(id)arg1;
- (void)uncommonFriendsTipsDidShow:(int)arg1;
- (_Bool)shouldShowUnCommonFriendsTips;
- (void)uncommonFriendsTipsTapped:(id)arg1;
- (void)grayTipsManagerDidInsertMsgTab:(id)arg1 retusls:(id)arg2;
- (void)_showUncommonFriendsTipsIfNeeded;
- (void)showUncommonFriendsTipsIfNeeded;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (id)prepareUploadMultiImage:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3;
- (void)insertPreuploadImageMessage:(id)arg1 preuploadState:(unsigned long long)arg2;
- (void)uploadImage:(id)arg1;
- (void)preuploadImage:(id)arg1;
- (id)generateMessageModelByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 saveMsg:(_Bool)arg4 content:(id)arg5;
- (id)generateMessageModelByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 saveMsg:(_Bool)arg4;
- (void)requestMobileTipsWithMessages:(id)arg1 includeFrequencyLimit:(_Bool)arg2;
- (void)requestMobielTipsWhenOpenAIO;
- (void)addSidAndJumpUrl:(id)arg1;
- (void)freeTeleWithModel:(id)arg1;
- (void)handleFreeTeleClickEvent:(id)arg1;
- (void)handleTeleFreeBlackTipsShowForMsgs:(id)arg1;
- (_Bool)handleTeleBannerButtonClick:(id)arg1;
- (void)handleTeleFreeTipsShow;
- (id)getChatViewUin;
- (id)getArkAppModelWithArkUIView:(id)arg1;
- (void)dismissChatViewBarWithUin:(id)arg1;
- (void)showChatViewBarTitle:(id)arg1 icon:(id)arg2 chatViewUin:(id)arg3;
- (void)gotoSeq:(long long)arg1;
- (void)scrollToArkModel;
- (void)HandleArkBannerTipIsAppear:(_Bool)arg1;
- (void)bannerArkBannerTipViewDidClick:(id)arg1;
- (void)onClickedWithItem:(id)arg1;
- (void)showBabyQKeyWordPanel;
- (void)actionInputbarBabyQPanel:(id)arg1;
- (void)checkBabyQKeyWordView;
- (void)hideBabyQSelectPicNotify;
- (void)showBabyQSelectPicNotify;
- (long long)converBabyQNotifyType:(long long)arg1;
- (void)checkHideBabyQNotify;
- (void)checkShowBabyQEditPhotoNotify;
- (void)checkShowBabyQNotify;
- (void)judgeVideoMessageTriggerFriUin:(id)arg1;
- (void)judgeVoiceMessageTriggerFriUin:(id)arg1;
- (void)judgeC2CMessageTriggerFriUin:(id)arg1;
- (void)goToAudioChat;
- (void)gotoAudioChatFromCorner;
- (_Bool)handleP2PAVBannerTipViewClick:(id)arg1;
- (void)showP2PAVTips;
- (void)handleP2PAVTipsShow:(int)arg1;
- (void)handleOnewayFriendNotification:(id)arg1;
- (void)requestDeleteOnewayFriend;
- (void)requestOnewayFriendList;
- (void)showOnewayFriendTips;
- (void)showOnewayFriendTipsIfNeed;
- (void)blockMessages:(id)arg1;
- (void)updateBlockBtnTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
