/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhoneNavigationController.h"
#import "MobilePhone-Structs.h"

@class TPAlertViewHelper, PHVoicemailListViewController, PHVoicemailNoContentViewController, PHVoicemailSetupViewController;

__attribute__((visibility("hidden")))
@interface PHVoicemailNavigationController : PhoneNavigationController {
	PHVoicemailListViewController* _inboxViewController;
	PHVoicemailListViewController* _trashViewController;
	PHVoicemailListViewController* _blockedViewController;
	PHVoicemailSetupViewController* _setupViewController;
	PHVoicemailNoContentViewController* _noContentViewController;
	TPAlertViewHelper* _mailboxFullAlertViewHelper;
	BOOL _active;
	BOOL _mailboxRequiresSetupPreviousValue;
	BOOL _sharedServiceIsSubscribedPreviousValue;
}
@property(assign) BOOL sharedServiceIsSubscribedPreviousValue;
@property(assign) BOOL mailboxRequiresSetupPreviousValue;
@property(readonly, assign) PHVoicemailNoContentViewController* noContentViewController;
@property(readonly, assign) PHVoicemailSetupViewController* setupViewController;
@property(readonly, assign) PHVoicemailListViewController* blockedViewController;
@property(readonly, assign) PHVoicemailListViewController* trashViewController;
@property(readonly, assign) PHVoicemailListViewController* inboxViewController;
+(XXStruct_ndkk2A)badge;
+(id)tabBarIconName;
+(id)tabBarIconImageSelected;
+(id)tabBarIconImage;
+(id)tabBarIconImageName;
+(int)tabViewType;
-(void)_handleCTIndicatorsVoicemailNotification:(id)notification;
-(void)_handleActiveNotification:(id)notification;
-(void)_voicemailsAdded:(id)added;
-(void)_handleSuspend:(id)suspend;
-(void)_handleTaskEndedOrCancelled:(id)cancelled;
-(void)_handleMessageWaitingStateChanged:(id)changed;
-(void)_handleOnlineStateChanged:(id)changed;
-(void)_handleStoreChanged:(id)changed;
-(void)_handleSetupRequirementChanged:(id)changed;
-(void)_playVoicemailSound;
-(void)_checkMailboxUsage;
-(void)_updateUIStateForce:(BOOL)force;
-(void)_updateUIState;
-(void)handleURL:(id)url;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)init;
-(BOOL)shouldSnapshot;
-(void)_invalidateBadge;
@end

