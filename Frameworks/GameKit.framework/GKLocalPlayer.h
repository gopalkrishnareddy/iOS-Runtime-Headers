/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKAddressBook, GKInvite, NSArray, NSInvocation, NSMutableArray, NSString, UIAlertView;

@interface GKLocalPlayer : GKPlayer {
    GKInvite *_acceptedInvite;
    NSString *_accountName;
    GKAddressBook *_addressBook;
    BOOL _authenticated;
    BOOL _authenticatingCurrentAccount;
    id _authenticationCompletionHandler;
    NSInvocation *_currentFriendRequestInvocation;
    NSMutableArray *_emails;
    NSUInteger _failedLogins;
    BOOL _findable;
    NSArray *_friends;
    BOOL _gameCenterAuthenticating;
    NSString *_lastUsernameAttempted;
    UIAlertView *_loginAlertView;
    BOOL _underage;
    BOOL _updating;
}

@property(retain) GKInvite *acceptedInvite;
@property(retain) GKInvite *acceptedInvite;
@property(retain) NSString *accountName;
@property(retain) NSString *accountName;
@property(retain) GKAddressBook *addressBook;
@property(retain) GKAddressBook *addressBook;
@property(copy) ? *authenticationCompletionHandler;
@property(retain) NSInvocation *currentFriendRequestInvocation;
@property(retain) NSMutableArray *emails;
@property(retain) NSMutableArray *emails;
@property(retain) NSArray *friends;
@property(retain) NSString *lastUsernameAttempted;
@property(retain) NSString *lastUsernameAttempted;
@property(retain) UIAlertView *loginAlertView;
@property(getter=isAuthenticated) BOOL authenticated;
@property(getter=isAuthenticated) BOOL authenticated;
@property BOOL authenticatingCurrentAccount;
@property NSUInteger failedLogins;
@property(getter=isFindable) BOOL findable;
@property(getter=isFindable) BOOL findable;
@property BOOL gameCenterAuthenticating;
@property(getter=isUnderage) BOOL underage;
@property BOOL updating;

+ (id)accountName;
+ (void)filteredEmailsByCommunityMembership:(id)arg1 block:(id)arg2;
+ (BOOL)hasAuthenticatedAccount;
+ (id)localPlayer;

- (void)abortAuthenticationWithError:(id)arg1;
- (id)acceptedInvite;
- (id)accountName;
- (void)accountViewControllerDidFinish:(id)arg1 accountCreated:(BOOL)arg2;
- (void)accountWindowDidDismiss;
- (void)addEmail:(id)arg1 verified:(BOOL)arg2;
- (void)addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (id)addressBook;
- (void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)authenticateCurrentAccountWithCompletionHandler:(id)arg1;
- (void)authenticateExistingAccount:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
- (void)authenticateExistingAccountWithCompletionHandler:(id)arg1;
- (void)authenticateRequest:(id)arg1 completedWithError:(id)arg2;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)authenticateWithoutLoginWithCompletionHandler:(id)arg1;
- (BOOL)authenticatingCurrentAccount;
- (id)authenticationCompletionHandler;
- (void)authorizeExistingAccountWithCompletionHandler:(id)arg1;
- (void)cancelAuthentication;
- (void)changePasswordForExistingAccountWithCompletionHandler:(id)arg1;
- (void)clearDetails;
- (void)createNewAccountWithEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (id)currentFriendRequestInvocation;
- (void)daemonAcceptedGameInvite:(id)arg1;
- (void)daemonCancelledGameInvite:(id)arg1;
- (void)daemonInviteeRespondedToGameInvite:(id)arg1;
- (void)daemonPlayersToInvite:(id)arg1;
- (void)dealloc;
- (void)editAccountViewControllerWithCompletionHandler:(id)arg1;
- (id)emails;
- (NSUInteger)failedLogins;
- (id)friends;
- (BOOL)gameCenterAuthenticating;
- (id)iTunesAccountName;
- (id)init;
- (void)invalidatedCache:(id)arg1;
- (BOOL)isAuthenticated;
- (BOOL)isFindable;
- (BOOL)isUnderage;
- (id)lastUsernameAttempted;
- (void)loadFriendIDsWithCompletionHandler:(id)arg1;
- (void)loadFriendRequests:(id)arg1;
- (void)loadFriendsAsPlayersWithCompletionHandler:(id)arg1;
- (void)loadFriendsWithCompletionHandler:(id)arg1;
- (void)loadRecentMatchesForGame:(id)arg1 block:(id)arg2;
- (id)loginAlertView;
- (void)loginFailedForUsername:(id)arg1;
- (BOOL)matchesABRecord:(void*)arg1;
- (BOOL)populateWithDictionary:(id)arg1;
- (void)removeAccountWindow;
- (void)removeFriend:(id)arg1 block:(id)arg2;
- (void)reset:(id)arg1;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 block:(id)arg3;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 block:(id)arg5;
- (void)sendFriendRequest:(id)arg1 toEmailAddresses:(id)arg2 block:(id)arg3;
- (void)sendFriendRequest:(id)arg1 toPlayers:(id)arg2 block:(id)arg3;
- (void)sendFriendRequestToAlias:(id)arg1 message:(id)arg2 withCompletionHandler:(id)arg3;
- (void)sendFriendRequestToEmail:(id)arg1 message:(id)arg2 withCompletionHandler:(id)arg3;
- (void)sendFriendRequestToPlayer:(id)arg1 withMessage:(id)arg2 withCompletionHandler:(id)arg3;
- (void)setAcceptedInvite:(id)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAddressBook:(id)arg1;
- (void)setAuthenticated:(BOOL)arg1;
- (void)setAuthenticatingCurrentAccount:(BOOL)arg1;
- (void)setAuthenticationCompletionHandler:(id)arg1;
- (void)setAvatar:(id)arg1 withDescription:(id)arg2 color:(id)arg3 block:(id)arg4;
- (void)setCurrentFriendRequestInvocation:(id)arg1;
- (void)setEmails:(id)arg1;
- (void)setFailedLogins:(NSUInteger)arg1;
- (void)setFindable:(BOOL)arg1;
- (void)setFriends:(id)arg1;
- (void)setGameCenterAuthenticating:(BOOL)arg1;
- (void)setLastUsernameAttempted:(id)arg1;
- (void)setLoginAlertView:(id)arg1;
- (void)setStatus:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setStatus:(id)arg1;
- (void)setUnderage:(BOOL)arg1;
- (void)setUpdating:(BOOL)arg1;
- (void)showAccountWindowForMode:(NSInteger)arg1 withEmail:(id)arg2;
- (void)showAlertForTag:(NSUInteger)arg1;
- (void)showAlertWithDictionary:(id)arg1;
- (void)signOutWithCompletionHandler:(id)arg1;
- (BOOL)updating;

@end