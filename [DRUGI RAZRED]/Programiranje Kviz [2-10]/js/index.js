(function() {
  var questions = [{
    question: "Који наведени тип податка НЕ ПОСТОЈИ у програмском језику Це?",
    choices: ['int', 'float', 'long void', 'enum'], // long void ne postoji
    correctAnswer: 2
  }, {
    question: "Дата је следеће наредба: <br/>&emsp;&emsp;&emsp;unsigned int promenljiva; <br/>&nbsp;&nbsp;Шта смо декларисали овом наредбом?",
    choices: ['Једну променљиву целобројног типа без предзнака', 'Једну променљиву целобројног типа са предзнаком', 'Наредба није исправно написана', 'Једну променљиву реалног типа'],
    correctAnswer: 0
  }, {
    question: "Која од наведених наредби дефинише једну целобројну константу која ће имати вредност 5?",
    choices: ['int KONSANTA = 5;', 'const float KONSANTA = 5;', 'int const KONSANTA = 5;', 'const int KONSANTA = 5;'],
    correctAnswer: 3
  }, {
    question: "Који од наведених идентификатора је правилно написан?",
    choices: ['1broj', 'prosecnaOcena', 'identifi kator', 'identifi.kator'],
    correctAnswer: 1
  }, {
    question: "Које врсте оператора постоје у програмском језику Це?",
    choices: ['Унарни, тернарни, дуални', 'Унарни, тернарни, бинарни', 'Једноструки, двоструки, вишеструки', 'Не постоје оператори у језику Це'],
    correctAnswer: 1
  }, {
    question: "Са чиме се завршава наредба у програмском језику Це?",
    choices: ['Знаком једнако', 'Знаком двотачка', 'Знаком тачка-зарез', 'Оператором ->'],
    correctAnswer: 2
  }, {
    question: "Шта су наредбе?",
    choices: ['Наредбе су прости изрази', 'Наредбе не постоје у програмском језику Це', 'Наредбе су врсте наређења претраживачу', 'Комбинација једног или више израза у структуру/е'],
    correctAnswer: 3
  }, {
    question: "Постоји ли најкраћа наредба у програмском језику Це?",
    choices: ['Постоји, наредба тачка-зарез (празна наредба)', 'Не постоји, наредба мора имати неки израз', 'Постоји, наредба return 0; је најкраћа наредба', 'Отворена витичаста заграда је најкраћа наредба'],
    correctAnswer: 0
  }, {
    question: "Одредити вредност променљиве А након извршења следећег израза:<br/>&emsp;&emsp;&emsp;&emsp;&emsp; A = (3 == 6) + (8 != 4) * (2 <= 2);", //
    choices: ['0', '3', '1', '10'],
    correctAnswer: 2
  }, {
    question: "Која наредба је исправно написана?",
    choices: ['printf("%d", "promenljiva");', 'print("%d", promenljiva);', 'printf("%d", promenljiva);', 'printf("%d", &promenljiva);'],
    correctAnswer: 2
  }, {
    question: "Користимо функцију pow(x, 2). Коју библиотеку треба укључити да би могли да користимо наведену функцију?",
    choices: ['math.h', 'stdio.h', 'stdlib.h', 'conio.h'],
    correctAnswer: 0
  }, { 
    question: "Шта ради следећи део кода? <br/>&emsp;&emsp;&emsp;int a = 5;<br/>&emsp;&emsp;&emsp;&emsp;&emsp;if(a == 5)<br/>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;printf(\"a je 5\");<br/>&emsp;&emsp;&emsp;&emsp;&emsp;else<br/>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;printf(\"a nije 5\");",
    choices: ['Штампа се вредност променљиве а', 'Штампа се \"a je 5\"', 'Штампа се \"a nije 5\"', 'Не штампа се ништа'],
    correctAnswer: 1
  }, { 
    question: "Која је вредност променљиве А након извршења следеће наредбе?<br/>&emsp;&emsp;&emsp; А = (5 < 4) ? -5 : 10;",
    choices: ['5', '4', '-5', '10'],
    correctAnswer: 3
  }, {
    question: "Која је разлика између while и for петље?",
    choices: ['Нема разлике', 'while петља је бржа', 'while петљу користимо за неодређен број итерација, док for петљу користимо за одређен број итерација', 'for петља је бржа'],
    correctAnswer: 2
  }, {
    question: "Која је исправна дефиниција низа?",
    choices: ['Низ је скуп података истог типа', 'Низ је скуп података различитог типа', 'Низ је скуп података истог типа и несуседних меморијских локација', 'Низ је скуп података истог типа и суседних меморијских локација'],
    correctAnswer: 3
  }, { 
    question: "Која наредба за декларацију и дефиницију низа је исправно написана?",
	choices: ['int [ ]niz = {1, 2, 3, 4, 5};', 'int niz[ ] = {1, 2, 3, 4, 5};', 'int niz = {1, 2, 3, 4, 5};', 'int niz{ } = [1, 2, 3, 4, 5];'],
    correctAnswer: 1
  }, {
    question: "Која је разлика између ротирања и померења елемената низа?",
    choices: ['Разлика је што код ротирања чувамо први/последњи елемент у низу', 'Разлика је што код померања чувамо први/последњи елемент у низу', 'Нема разлике, ради исто', 'Ротирање не постоји у раду са низовима'],
    correctAnswer: 0
  }, { 
    question: "У ком интервалу (распону) се крећу индекси елемената низа (N је величина низа)?",
    choices: ['од 0 до N - 1', 'од 1 до N', 'од 1 до N + 1', 'од 0 до N'],
    correctAnswer: 0
  }, { 
    question: "Која наредба описује штампање вредности седмог елемента у целобројном низу?",
    choices: ['printf("%d", niz[ i ]);', 'printf("%d", niz[ 6 ]);', 'printf("%d", niz[ 7 ]);', 'printf("%d", niz[ N ]);'],
    correctAnswer: 1
  }, { 
    question: "Која наредба описује учитавање вредности у седми елемент целобројног низа?",
    choices: ['scanf("%d", &niz[ i ]);', 'scanf("%d", &niz[ 6 ]);', 'scanf("%d", &niz[ 7 ]);', 'scanf("%d", &niz[ N ]);'],
    correctAnswer: 1
  }, {
    question: "Шта се добија поступком сортирања низа?",
    choices: ['Низ сортиран у растућем/опадајућем редоследу', 'Максимум низа', 'Минимум низа', 'Средишњи елемент низа'],
    correctAnswer: 0
  }, {
    question: "Шта се добија поступком инвертовања низа?",
    choices: ['Максимум низа', 'Не добија се ништа', 'Растуће сортиран низ', 'Низ пресликан као у огледалу у односу на симетралу (половину) низа'],
    correctAnswer: 3
  }, {
    question: "Шта се добија поступком претраге низа?",
    choices: ['Тражени елемент у низу', 'Највећи елемент у низу', 'Нула', 'Показивач на низ'],
    correctAnswer: 0
	}, {
    question: "Шта је показивач?",
    choices: ['Променљива која чува адресу неке меморијске локације', 'Променљива која чува неку вредност', 'Низ који има само један елемент', 'Реални број'],
    correctAnswer: 0
  }, {
    question: "Шта показивач чува?",
    choices: ['Вредност коју уноси корисник', 'Меморијску адресу', 'Низ', 'Један карактер'],
    correctAnswer: 1
  }, {
    question: "Шта представља само име низа?",
    choices: ['Консанти показивач на први елемент у низу', 'Не представља ништа', 'Консанти показивач на последњи елемент у низу', 'Консанти показивач на средишњи елемент у низу'],
    correctAnswer: 0
  }, {
    question: "Зашто издвајамо посебне логичке целине у функције?",
    choices: ['Зато што је тако боље', 'Ради прегледности програма', 'Због модуларности програма односно издвајања на мање логичке целине и лакшег отркривања грешака у програму', 'Програм ради брже'],
    correctAnswer: 2
  }, {
    question: "Шта су формални параметри функције?",
    choices: ['Непостојећи параметри', 'Параметри чија имена важе само унутар функције или блока у којој/којем су прослеђени', 'Параметри чија имена важе у целом програму', 'Низови података'],
    correctAnswer: 1
  }, {
    question: "Мењају ли се вредности параметара ако их пренесемо по вредности функцији?",
    choices: ['Да, мењају се трајно', 'Не мењају се'],
    correctAnswer: 1
  }, {
    question: "Мењају ли се вредности параметара ако их пренесемо по адреси (референци) функцији?",
    choices: ['Да, мењају се трајно', 'Не мењају се'],
    correctAnswer: 0
  }];
  
  var questionCounter = 0; //Tracks question number
  var selections = []; //Array containing user choices
  var quiz = $('#quiz'); //Quiz div object
  
  // Display initial question
  displayNext();
  
  // Click handler for the 'next' button
  $('#next').on('click', function (e) {
    e.preventDefault();
    
    // Suspend click listener during fade animation
    if(quiz.is(':animated')) {        
      return false;
    }
    choose();
    
    // If no user selection, progress is stopped
    if (isNaN(selections[questionCounter])) {
      alert('Морате одабрати један одговор!');
    } else {
      questionCounter++;
      displayNext();
    }
  });
  
  // Click handler for the 'prev' button
  $('#prev').on('click', function (e) {
    e.preventDefault();
    
    if(quiz.is(':animated')) {
      return false;
    }
    choose();
    questionCounter--;
    displayNext();
  });
  
  // Click handler for the 'Start Over' button
  $('#start').on('click', function (e) {
    e.preventDefault();
    
    if(quiz.is(':animated')) {
      return false;
    }
    questionCounter = 0;
    selections = [];
    displayNext();
    $('#start').hide();
  });
  
  // Animates buttons on hover
  $('.button').on('mouseenter', function () {
    $(this).addClass('active');
  });
  $('.button').on('mouseleave', function () {
    $(this).removeClass('active');
  });
  
  // Creates and returns the div that contains the questions and 
  // the answer selections
  function createQuestionElement(index) {
    var qElement = $('<div>', {
      id: 'question'
    });
    
    var header = $('<h2>Питање ' + (index + 1) + ':</h2>');
    qElement.append(header);
    
    var question = $('<p>').append(questions[index].question);
    qElement.append(question);
    
    var radioButtons = createRadios(index);
    qElement.append(radioButtons);
    
    return qElement;
  }
  
  // Creates a list of the answer choices as radio inputs
  function createRadios(index) {
    var radioList = $('<ul>');
    var item;
    var input = '';
    for (var i = 0; i < questions[index].choices.length; i++) {
      item = $('<li>');
      input = '<input type="radio" name="answer" value=' + i + ' />';
      input += questions[index].choices[i];
      item.append(input);
      radioList.append(item);
    }
    return radioList;
  }
  
  // Reads the user selection and pushes the value to an array
  function choose() {
    selections[questionCounter] = +$('input[name="answer"]:checked').val();
  }
  
  // Displays next requested element
  function displayNext() {
    quiz.fadeOut(function() {
      $('#question').remove();
      
      if(questionCounter < questions.length){
        var nextQuestion = createQuestionElement(questionCounter);
        quiz.append(nextQuestion).fadeIn();
        if (!(isNaN(selections[questionCounter]))) {
          $('input[value='+selections[questionCounter]+']').prop('checked', true);
        }
        
        // Controls display of 'prev' button
        if(questionCounter === 1){
          $('#prev').show();
        } else if(questionCounter === 0){
          
          $('#prev').hide();
          $('#next').show();
        }
      }else {
        var scoreElem = displayScore();
        quiz.append(scoreElem).fadeIn();
        $('#next').hide();
        $('#prev').hide();
        $('#start').show();
      }
    });
  }
  
  // Computes score and returns a paragraph element to be displayed
  function displayScore() {
    var score = $('<p>',{id: 'question'});
    
    var numCorrect = 0;
    for (var i = 0; i < selections.length; i++) {
      if (selections[i] === questions[i].correctAnswer) {
        numCorrect++;
      }
    }
    
    score.append('Имате ' + numCorrect + ' тачних одговора од ' +
                 questions.length + '.');
    return score;
  }
})();