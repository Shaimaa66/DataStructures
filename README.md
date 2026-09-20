# CF117 — C++ Student Hub

A **GitHub Pages-ready static learning portal** for Introduction to Programming with C++ (CF117). Instructor: Dr. Shaimaa Ayman. Based on the supplied consolidated 10-chapter course book and its existing interactive quizzes.

## Study on the published course website

1. Open the GitHub Pages link provided by your instructor.
2. Choose **Read PDF Book** or **Open book reader**. Each chapter ends with a quiz link; the reader also offers direct chapter quiz buttons if a PDF viewer blocks a link.
3. The online portal hosts quizzes in `quizzes/`; YouTube videos require an internet connection. Quiz results stay in your browser; they are not submitted to an LMS/instructor. You can use **Export results (.json)** if you need a record.

## Publish to GitHub Pages — خطوات النشر

1. Create a **public** GitHub repository, e.g. `cf117-cpp-student-hub` (Settings may differ on paid plans; GitHub Free Pages requires a public repo).
2. Upload the **contents of the provided GitHub-ready site folder** to the repository root. The uploaded root must contain `index.html`, `quizzes/`, `chapters/`, `assets/`, and `CF117_Consolidated_10_Chapters_Final.pdf`; do not upload a ZIP instead of the site files.
3. Under **Settings → Pages → Build and deployment**, choose **Deploy from a branch** → `main` → `/(root)` → **Save**.
4. Wait for the deployment and use the **Visit site** link on the Pages settings screen. The usual project-site pattern is `https://YOUR_USERNAME.github.io/YOUR_REPOSITORY/` (replace both placeholders with your real values). This template is **not** a live URL until you publish.
5. Share the published **site URL**, not just the repository's Code page, with students.

### Git CLI alternative

```bash
git init
git add .
git commit -m "Publish CF117 student hub"
git branch -M main
git remote add origin https://github.com/YOUR_USERNAME/cf117-cpp-student-hub.git
git push -u origin main
```

These commands assume you created the empty repository and have authenticated with GitHub.

## What's inside

```text
index.html                                   Student homepage and link groups
book.html                                    In-browser PDF reader
CF117_Consolidated_10_Chapters_Final.pdf             Full course book (PDF)
CF117_10_Chapter_Interactive_Quizzes.html   All quizzes in one page
quizzes/Chapter_01_Quiz.html                 Individual quizzes (01–10)
chapters/chapter-01.html                     Chapter learning pages (01–10)
projects/Project_1.cpp                       Source solutions (1–3)
assets/                                      Local CSS, JS, images, icon
.nojekyll                                    GitHub Pages compatibility
```

128 original multiple-choice self-check questions distributed across 10 chapters; no external JavaScript, stylesheets, fonts or APIs are required for the site's learning functionality. Videos are external links.

## Privacy, hosting & maintenance

- GitHub Pages is a public student website. Do not upload student personal data, answer submissions, or material you don't have permission to redistribute.
- This is a static study website, **not** an authenticated LMS. Answers are graded on the student's device and optionally saved by that browser; they are not sent to a server.
- Update the book by replacing `CF117_Consolidated_10_Chapters_Final.pdf` at the same path so the links keep working. Update chapter video links in `index.html` and the matching `chapters/chapter-XX.html` if necessary.
- The video labels and original lesson URLs come from the supplied Word handout; external sites can change later. Linked source videos are not downloaded or embedded.
- HTML links use paths relative to the GitHub Pages project root. PDF quiz links are relative URI actions; some downloaded-file PDF viewers restrict them, so the website Book Reader provides 10 direct quiz links as a fallback.

## Recommended student sequence

Open the published homepage → read the PDF chapter → review its video group → complete its standalone quiz → export score if needed → move to the next chapter. Chapter 10 includes three fully worked C++ projects with source code.

## Update existing GitHub repository (small patch)

Replace the root files `index.html`, `book.html`, `README.md` and `CF117_Consolidated_10_Chapters_Final.pdf` with the patch files, keeping names and folders unchanged. Delete the old root file `CF117_Offline_Kit.zip` from GitHub using the file menu or a `git rm` commit. The rest of `quizzes/`, `chapters/`, `assets/` and `projects/` stays exactly as it is.

For guaranteed clickable quiz links from a separately downloaded PDF across different PDF readers, an absolute published GitHub Pages site URL is needed when finalizing the PDF. The current PDF uses site-relative quiz URIs, best used from the published portal; the Book Reader's direct quiz buttons work independently of PDF link handling.
