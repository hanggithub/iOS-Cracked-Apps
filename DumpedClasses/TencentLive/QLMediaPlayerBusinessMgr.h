//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPlayerMessageSender.h"

@class KKMediaRootViewController;

@interface QLMediaPlayerBusinessMgr : QLPlayerMessageSender
{
    KKMediaRootViewController *_mainCtl;
}

@property(nonatomic) __weak KKMediaRootViewController *mainCtl; // @synthesize mainCtl=_mainCtl;
- (void).cxx_destruct;
- (id)getCurrentReportFlowid;
- (void)onPlayerWillDisappear;
- (void)onPlayerWillAppear;
- (id)getBusinessInstanceWithClassName:(Class)arg1;
- (void)performActionAfterBackAD;
- (_Bool)shouldWaitBackAD;
- (_Bool)shouldHideBanaba;
- (_Bool)shouldHideRemoteBtn;
- (void)didShowClarityView:(id)arg1;
- (void)didShowSliderPoint:(id)arg1;
- (void)didShowLoadingView:(id)arg1;
- (void)startRequestAds:(id)arg1;
- (id)getCustomClarityAdsInfo;
- (id)getCustomPlayerSliderInfo;
- (id)getCustomPlayerLoadingInfo;
- (id)getSeeBackState;
- (void)airPlayStopToPlay;
- (void)airPlayStartToPlay;
- (void)jumpAdsPlayVideo;
- (void)pollingLiveEnded;
- (void)retryPlayCurrentVideo:(int)arg1;
- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (void)mpbErrorButtonClick:(long long)arg1;
- (void)mpbMediaClosed;
- (void)onVideoInfoPrepared:(id)arg1;
- (void)onClarityInfoPrepared:(id)arg1;
- (void)mpbStartToPlayMedia;
- (void)mpbMediaRotatetionChange;
- (_Bool)showedEndRecmView;
- (_Bool)mpbShouldContinuePlay;
- (void)mpbJobsAfterPlayBackFinished;
- (void)mpbPlayBackFinished;
- (void)setNeedUpdateEntryUIs;
- (void)doUpdateEntryUIs;
- (id)businessObjWithID:(id)arg1;
- (_Bool)businessExsist:(id)arg1;
- (void)registBusinessWithObj:(id)arg1;
- (void)addEeventObserver:(id)arg1;
- (void)sortBusinessesKeysArrayByPriority;
- (void)registBusiness:(Class)arg1;
- (void)dealloc;

@end

