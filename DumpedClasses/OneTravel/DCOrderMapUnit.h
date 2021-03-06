//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCMapCom.h"

@class DCMulAnnotation, DCNavigationControlView, DCOrderMapMessage, DCOrderViewModel, DCOuterMapNavigator, UIButton;

@interface DCOrderMapUnit : DCMapCom
{
    _Bool _isNavStatus;
    _Bool _isUserChange;
    DCOrderViewModel *_orderVModel;
    double _noticeCardHeight;
    double _routeHeight;
    double _lastMapScale;
    UIButton *_upRegionButton;
    UIButton *_downRegionButton;
    DCMulAnnotation *_pAnnotation;
    DCNavigationControlView *_navStatusView;
    DCOrderMapMessage *_messageManager;
    DCOuterMapNavigator *_outerMapNavigator;
}

@property(nonatomic) _Bool isUserChange; // @synthesize isUserChange=_isUserChange;
@property(retain, nonatomic) DCOuterMapNavigator *outerMapNavigator; // @synthesize outerMapNavigator=_outerMapNavigator;
@property(retain, nonatomic) DCOrderMapMessage *messageManager; // @synthesize messageManager=_messageManager;
@property(retain, nonatomic) DCNavigationControlView *navStatusView; // @synthesize navStatusView=_navStatusView;
@property(retain, nonatomic) DCMulAnnotation *pAnnotation; // @synthesize pAnnotation=_pAnnotation;
@property(retain, nonatomic) UIButton *downRegionButton; // @synthesize downRegionButton=_downRegionButton;
@property(retain, nonatomic) UIButton *upRegionButton; // @synthesize upRegionButton=_upRegionButton;
@property(nonatomic) double lastMapScale; // @synthesize lastMapScale=_lastMapScale;
@property(nonatomic) _Bool isNavStatus; // @synthesize isNavStatus=_isNavStatus;
@property(nonatomic) double routeHeight; // @synthesize routeHeight=_routeHeight;
@property(nonatomic) double noticeCardHeight; // @synthesize noticeCardHeight=_noticeCardHeight;
@property(retain, nonatomic) DCOrderViewModel *orderVModel; // @synthesize orderVModel=_orderVModel;
- (void).cxx_destruct;
- (id)analyticsKey:(id)arg1;
- (id)eventKey:(id)arg1;
- (id)analyticsOrderMode;
- (void)didSelectAMapApp:(id)arg1;
- (void)clickedChangeMap;
- (void)analyticsClickNavWithVC;
- (void)appDidBecomeActive;
- (void)removeDashLine;
- (void)reloadFreeState;
- (void)reloadThanksState;
- (void)reloadLocationState;
- (id)messageForStatus:(int)arg1;
- (void)reloadPhoneState;
- (void)reloadIMState;
- (void)reloadIMNotificationWithSessonId:(id)arg1;
- (void)reloadUserToolMessage;
- (void)updateToolMessage;
- (void)hideNavCard;
- (void)showNavCard;
- (void)clickConnectMethod:(id)arg1;
- (void)isShareLocationButtonAvailable;
- (void)mapApp:(id)arg1 didSelectAction:(long long)arg2 from:(id)arg3;
- (void)updateNavigationState:(_Bool)arg1 type:(int)arg2;
- (void)startNavigationEndPoint:(_Bool)arg1;
- (void)startNavigationStartPoint:(_Bool)arg1;
- (_Bool)isPassengerVC;
- (id)navigationRouteModel:(id)arg1;
- (id)getEndRouteModel;
- (id)getStartRouteInfoModel;
- (void)showNavSelectCard;
- (void)navRoute:(int)arg1;
- (_Bool)isReallyInNavigation;
- (_Bool)isInNavigation;
- (void)reloadShowTrafficWithAnimate:(_Bool)arg1;
- (void)clickedMarkView:(long long)arg1;
- (void)updateVisibleMapRect:(id)arg1;
- (void)regionDownButtonSelected;
- (void)regionUpButtonSelected;
- (void)updateUpDownRegionButton;
- (_Bool)haveMarkWithRouteAnnotation;
- (struct UIEdgeInsets)getVisibleMapRect;
- (void)setRegionButtonFrame;
- (void)dashLineMapRect;
- (_Bool)isShowVisibleDashLineMapRect;
- (void)updateMapViewShowRect;
- (_Bool)isTopViewController;
- (void)refreshOrderRouteInfoWithOrderChange;
- (void)setupMapData;
- (void)setupMapView;
- (void)closeOuterNavigation;
- (void)closeNavigation;
- (void)navigationStart:(_Bool)arg1;
- (void)removeDBOrderRoute;
- (void)updateMapViewSubRoute:(_Bool)arg1;
- (void)updateSubviews;
- (id)topVCView;
- (void)dealloc;
- (void)refreshOrderRouteInfo;
- (void)stopMapSCTX;
- (void)comWillDisAppear;
- (void)comDidAppear;
- (void)comWillAppear;
- (void)updateMapFrame:(struct CGRect)arg1;
- (void)loadMapWithView:(id)arg1;
- (void)registerNotifications;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <DCOrderMapUnitDelegate> delegate;

@end

