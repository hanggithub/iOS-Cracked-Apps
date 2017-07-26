//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSBizCommentBaseViewController.h"

#import "APSKLaunchpadDataSource.h"
#import "APSKLaunchpadDelegate.h"
#import "LSBizCommentListViewDelegate.h"
#import "LSBizHomeDataManagerDelegate.h"
#import "LSLiveBroadcasterDelegate.h"
#import "LSLiveViewDelegate.h"
#import "LSPlayerGuideViewDelegate.h"
#import "LSReplayToolBarDelegate.h"
#import "LSResultViewControllerDelegate.h"
#import "LSShowToolBarDelegate.h"
#import "LSWatcherBarViewDelegate.h"
#import "TLRewardOptionUIDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"

@class APActionSheet, APSKLaunchpad, LSBizBubbleGeneratorView, LSBizCommentListView, LSBizCountDownView, LSBizCreateLiveWidget, LSBizHomeDataManager, LSBizInputControl, LSBizLiveView, LSBizPlayerGuideView, LSBizPopRewardView, LSBizReplayToolBar, LSBizResultViewController, LSBizShowToolBarView, LSBizWatcherBarView, NSString, TLRewardOptionUI, UITapGestureRecognizer;

@interface LSBizHomeViewController : LSBizCommentBaseViewController <LSShowToolBarDelegate, LSBizHomeDataManagerDelegate, LSLiveBroadcasterDelegate, LSLiveViewDelegate, UIActionSheetDelegate, LSBizCommentListViewDelegate, LSWatcherBarViewDelegate, TLRewardOptionUIDelegate, LSResultViewControllerDelegate, LSReplayToolBarDelegate, LSPlayerGuideViewDelegate, UIImagePickerControllerDelegate, APSKLaunchpadDelegate, APSKLaunchpadDataSource>
{
    _Bool _beautyEditing;
    _Bool _landscapeVideo;
    int _liveType;
    APSKLaunchpad *_launchPad;
    LSBizShowToolBarView *_toolBarView;
    LSBizCreateLiveWidget *_createLiveWidget;
    LSBizWatcherBarView *_watcherToolbar;
    LSBizResultViewController *_finishViewController;
    LSBizInputControl *_inputControl;
    APActionSheet *_actionSheet;
    LSBizHomeDataManager *_dataManager;
    TLRewardOptionUI *_rewardAgent;
    LSBizLiveView *_liveView;
    LSBizCommentListView *_commentListView;
    LSBizBubbleGeneratorView *_bubbleGeneratorView;
    long long _liveShowCloseRole;
    UITapGestureRecognizer *_tapScreenGesture;
    LSBizPopRewardView *_popRewardView;
    LSBizReplayToolBar *_replayToolBar;
    LSBizPlayerGuideView *_guideView;
    LSBizCountDownView *_countDownView;
    double _curPlayDuration;
}

@property(nonatomic) _Bool landscapeVideo; // @synthesize landscapeVideo=_landscapeVideo;
@property(nonatomic) double curPlayDuration; // @synthesize curPlayDuration=_curPlayDuration;
@property(retain, nonatomic) LSBizCountDownView *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) LSBizPlayerGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) LSBizReplayToolBar *replayToolBar; // @synthesize replayToolBar=_replayToolBar;
@property(retain, nonatomic) LSBizPopRewardView *popRewardView; // @synthesize popRewardView=_popRewardView;
@property(retain, nonatomic) UITapGestureRecognizer *tapScreenGesture; // @synthesize tapScreenGesture=_tapScreenGesture;
@property(nonatomic) _Bool beautyEditing; // @synthesize beautyEditing=_beautyEditing;
@property(nonatomic) long long liveShowCloseRole; // @synthesize liveShowCloseRole=_liveShowCloseRole;
@property(nonatomic) int liveType; // @synthesize liveType=_liveType;
@property(retain, nonatomic) LSBizBubbleGeneratorView *bubbleGeneratorView; // @synthesize bubbleGeneratorView=_bubbleGeneratorView;
@property(retain, nonatomic) LSBizCommentListView *commentListView; // @synthesize commentListView=_commentListView;
@property(retain, nonatomic) LSBizLiveView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) TLRewardOptionUI *rewardAgent; // @synthesize rewardAgent=_rewardAgent;
@property(retain, nonatomic) LSBizHomeDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) APActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) LSBizInputControl *inputControl; // @synthesize inputControl=_inputControl;
@property(retain, nonatomic) LSBizResultViewController *finishViewController; // @synthesize finishViewController=_finishViewController;
@property(retain, nonatomic) LSBizWatcherBarView *watcherToolbar; // @synthesize watcherToolbar=_watcherToolbar;
@property(retain, nonatomic) LSBizCreateLiveWidget *createLiveWidget; // @synthesize createLiveWidget=_createLiveWidget;
@property(retain, nonatomic) LSBizShowToolBarView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) APSKLaunchpad *launchPad; // @synthesize launchPad=_launchPad;
- (void).cxx_destruct;
- (void)dealloc;
- (void)playToEnd;
- (void)seekToTime:(double)arg1;
- (void)pauseLiveShow;
- (void)playLiveShow;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)closeGuideView;
- (void)addGuideView;
- (void)shareToChannel:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (id)htmlItemsOnLaunchpad:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)livePlayerLongPress;
- (id)mReplayToolBar;
- (id)mRewardAgent;
- (id)mInputControl;
- (void)commentListView:(id)arg1 longPressCommentAt:(id)arg2;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)replayToEnd;
- (void)closeWatchLive;
- (void)shareLive;
- (void)closeLivePlayer;
- (id)hostUserInfo;
- (void)resetLiveShowUI;
- (void)closeReplay;
- (void)startReplayLiveShow;
- (void)startNewLiveShow;
- (void)networkChangeFromWifiToCellar;
- (void)liveBroadcasterFocusTap;
- (void)playDurationReturn:(double)arg1;
- (void)playStateChanged:(_Bool)arg1;
- (void)playTimeUpdate:(double)arg1;
- (void)hostTapped;
- (void)fullScreen:(_Bool)arg1;
- (void)cameraOpened;
- (void)liveBroadcasterPlayTimeUpdate:(double)arg1;
- (void)liveBroadcasterError:(id)arg1;
- (void)closeMe;
- (void)pauseLiveShowByEnterBackGround;
- (void)pauseLiveShowByUser;
- (void)closeLiveWatcherBySecurity:(id)arg1;
- (void)closeLiveBySecurity:(id)arg1;
- (void)closeLiveShowByHost;
- (void)closeLiveBroadcaster;
- (void)handleWatcher;
- (id)mDataManager;
- (void)dataManager:(id)arg1 getResumeLiveShowInfoFailed:(id)arg2;
- (void)dataManager:(id)arg1 getResumeLiveShowInfo:(id)arg2;
- (void)handleCloseOperation:(id)arg1;
- (void)dataManager:(id)arg1 pickedGetVodInfoFail:(id)arg2;
- (void)dataManager:(id)arg1 pickedGetVodInfo:(id)arg2;
- (void)dataManager:(id)arg1 pickedExistLiveFail:(id)arg2;
- (void)replayBizLeaveMe;
- (void)dataManager:(id)arg1 pickedExistLive:(id)arg2 memoInfo:(id)arg3;
- (void)dataManager:(id)arg1 pickStatisticInfoFail:(id)arg2;
- (void)changeToLivePlayer;
- (void)dataManager:(id)arg1 pickedLiveShowFail:(id)arg2;
- (void)dataManager:(id)arg1 pickedLiveStatisticsInfo:(id)arg2;
- (void)dataManager:(id)arg1 pickedOptionInfo:(id)arg2;
- (void)addRewardOption:(id)arg1;
- (void)dataManager:(id)arg1 pickedStatisticInfoFail:(id)arg2;
- (void)dataManager:(id)arg1 pickedLiveShowInfo:(id)arg2 memoInfo:(id)arg3;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (_Bool)autohideNavigationBar;
- (id)mCreateLiveWidget;
- (void)openRankList:(id)arg1;
- (void)LSWatcherToolBar:(id)arg1 selectedUser:(id)arg2;
- (void)clearRewardAgent;
- (void)rewardDidFinish:(id)arg1 plumpRewardOption:(id)arg2;
- (void)prepardRewardDidFail:(id)arg1 failMemo:(id)arg2;
- (void)rewardDidCancel:(id)arg1;
- (void)doReward;
- (void)toolBar:(id)arg1 doOperation:(int)arg2;
- (id)watcherToolBarView;
- (void)checkUILayout;
- (id)mToolBar;
- (void)liveplayerTapped;
- (void)addLiveView;
- (void)buildReplay;
- (void)startReplay;
- (void)dispatchViewLayout;
- (void)clearLiveShow;
- (void)logout:(id)arg1;
- (void)addNotification;
- (void)addNotifications;
- (void)viewWillDestroy;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLiveShowInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
