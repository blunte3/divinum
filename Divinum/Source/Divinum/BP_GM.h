/** Please add a class description */
UCLASS(Blueprintable, BlueprintType)
class ABP_Gamemode : public AGameModeBase
{
	GENERATED_BODY()
public:
	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void Initialize();

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetPlayerControllerRef();

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetPlayerRef();

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetBoardRef();

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetTokenPiecesRef();

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void ProcessTokenPiece(ABP_TokenPiece_C* TokenPiece, ABP_TokenPiece_C* TempTokenPiece);

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "GamePlay")
	void StartGame();

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "GamePlay")
	void SetPlayerCamera();

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "GamePlay")
	void SwapPlayers();

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "Game Play")
	void RotateCamera(double Axis);

	/** Please add a function description */
	UFUNCTION(BlueprintPure, Category = "Player")
	void GetActivePlayer(FST_Player& ActivePlayer);

	/** Please add a function description */
	UFUNCTION(BlueprintPure, Category = "Player")
	void GetActivePlayerColor(TEnumAsByte<En_Color>& ActivePlayerColor);

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "Player")
	void GetPlayerByColor(TEnumAsByte<En_Color> Color, FST_Player& ActivePlayer);

	/** Please add a function description */
	UFUNCTION(BlueprintPure, Category = "Player")
	void GetPlayerByIndex(int32 PlayerIndex, FST_Player& ActivePlayer);

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void RandomizePlayer();

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, Category = "Game Play")
	void EndTurn();

	/** Please add a function description */
	UFUNCTION(BlueprintPure, Category = "Game Play")
	void CreateNotation(FST_Move Move, FString& Notation, FString MoveNotation, FString TokenPieceNotation, FString SquareNotation, bool IsCapture, bool IsCapture_0);
public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Default")
	TObjectPtr<USceneComponent> DefaultSceneRoot;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "References")
	TObjectPtr<ABP_PlayerController_C> PlayerControllerRef;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "References")
	TObjectPtr<ABP_Player_C> PlayerRef;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "References")
	TObjectPtr<ABP_Board_C> BoardRef;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "References")
	TArray<ABP_TokenPiece_C*> TokenPiecesRef;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "References")
	TObjectPtr<ABP_TokenPiece_C> SelectedTokenPiece;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "GamePlay")
	int32 ActivePlayer;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Game Play")
	int32 MoveCount;
};
